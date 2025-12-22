// 0/1 knapsack 
// this is an example of 2d dp 
#include<iostream>
#include<vector>
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
int solvemem(int capacity , int wt[] , int profit[] ,int index , int n,vector<vector<int>>&dp){
    if(index>=n){
        return 0;
    }
    // check if answer already present 
    if(dp[capacity][index]!=-1){
        return dp[capacity][index];
    }
    int include = 0 ;
    if(wt[index]<=capacity){
        include = profit[index] + solvemem(capacity-wt[index],wt,profit,index+1,n,dp);
    }
    int exclude = solvemem(capacity,wt,profit,index+1,n,dp);
    dp[capacity][index] = max(include,exclude);
    return dp[capacity][index];
}
int main(){
    int capacity = 50 ;
    int wt[] = {10,20,30};
    int profit[] = {60,100,120};
    int n = 3;
    int ans = solverec(capacity,wt,profit,0,n);
    cout<<ans<<endl;

    // initialising a 2d array 
    // no. of rows -> capacity ke according 
    // no. of columns index tak

    vector<vector<int>> dp(capacity+1 , vector<int>(n+1,-1));
    int dpans = solvemem(capacity,wt,profit,0,n,dp);
    cout<<"solved using mem : "<<dpans<<endl;
    return 0 ;
}