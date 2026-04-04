#include <iostream>
// #include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> t(1002,vector<int>(1002,-1));
int tabu(vector<int>&wt,vector<int>&val,int capacity,int n){
    for(int i = 0 ; i<n+1;i++){
        for(int j = 0  ; j<capacity+1;j++){
            if(i==0 ||j==0){
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < capacity + 1; j++) {
            if (wt[i - 1] <= j) {
                t[i][j] = max(
                    val[i - 1] + t[i - 1][j - wt[i - 1]],
                    t[i - 1][j]
                );
            } else {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][capacity];
}
int knapsack(vector<int>&wt,vector<int>&val,int capacity,int n){
    if(n==0 || capacity==0){
        return 0;
    }

    if(wt[n-1]<=capacity){
        return max((val[n-1]+knapsack(wt,val,capacity-wt[n-1],n-1)),knapsack(wt,val,capacity,n-1));
    }
    else{
        return knapsack(wt,val,capacity,n-1);
    }
}
int memo(vector<int>&wt,vector<int>&val,int capacity,int n){
    if(n==0 || capacity ==0) return 0;

    if(t[n][capacity]!=-1){
        return t[n][capacity];
    }
    if(wt[n-1]<=capacity){
        return t[n][capacity] = max((val[n-1]+knapsack(wt,val,capacity-wt[n-1],n-1)),knapsack(wt,val,capacity,n-1));
    }
    else{
        return t[n][capacity] = knapsack(wt,val,capacity,n-1);
    }
}
int main() {
    vector<int>wt = {1,3,4,5};
    vector<int>val = {1,4,5,7};
    int capacity = 7;
    int ans = knapsack(wt,val,capacity,wt.size());
    int answer = memo(wt,val,capacity,wt.size());
    int answers = tabu(wt,val,capacity,wt.size());
    cout<<ans<<" "<<answer<<" "<<answers;
    return 0;
}