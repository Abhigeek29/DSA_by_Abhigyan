#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{5,-1,51,7,-8,6,-9};
    int n = nums.size();
    vector<int> v1, v2 ,ans;
    // Dividing
    for(int i = 0; i<nums.size();i++){
        if(nums[i]>0){
            v1.push_back(nums[i]);
        }
        else{
            v2.push_back(nums[i]);
        }
    }
    // Merging array
    for(int i = 0;i<nums.size();i++){
        if(i%2==0){
            ans.push_back(v1[i]);
        }
        else{
            ans.push_back(v2[i]);
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<ans[i]<<" ";
    }
}