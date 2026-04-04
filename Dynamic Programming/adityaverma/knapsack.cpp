#include <iostream>
// #include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> t(1002,vector<int>(1002,-1));
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
    cout<<ans<<" "<<answer;
    return 0;
}