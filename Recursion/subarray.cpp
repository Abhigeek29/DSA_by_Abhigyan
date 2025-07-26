#include<iostream>
#include<vector>
using namespace std;

void subarray(vector<int>&nums , int start , int end){
    // Base case
    if(end>=nums.size()){
        return ;
    }
    // Ek case
    for(int i = start ; i<=end;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    subarray(nums,start,end+1);
}

void printsub(vector<int>&nums){
    for(int start = 0 ; start<nums.size();start++){
        int end = start;
        subarray(nums,start,end);
    }
}
int main() {
    vector<int>nums{1,2,3,4,5};
    printsub(nums);
    return 0;
}