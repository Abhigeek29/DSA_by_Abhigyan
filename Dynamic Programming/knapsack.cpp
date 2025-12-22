// 0/1 knapsack 
#include<iostream>
using namespace std;
int solverec(int capacity , int wt[] , int profit[] ,int index , int n ){
    //base case --> last element par pohoch gaye 
    if(index==n-1){
        if(wt[index]<=capacity){
            return profit[index];
        }
        else{
            return 0; // profit nhi le sakte toh zero 
        }
    }
    // either include karenge 
    int include = 0 ;
    if(wt[index]<=capacity){
        include = profit[index] + solverec(capacity-wt[index],wt,profit,index+1,n);
    }
    int exclude = 0 + solverec(capacity,wt,profit,index+1,n);

    int ans = max(include,exclude);
    return ans ;
}
int main(){
    int capacity = 50 ;
    int wt[] = {10,20,30};
    int profit[] = {60,100,120};
    int n = 3;
    int ans = solverec(capacity,wt,profit,0,n);
    cout<<ans;
    return 0 ;
}