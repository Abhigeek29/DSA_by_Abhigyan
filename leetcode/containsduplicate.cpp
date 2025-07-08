#include<iostream>
#include<algorithm>
#include<vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first = 0;
        int second = 1;
        int n = nums.size()-1;
        while(second <= n){
            if(nums[first]==nums[second]){
                return true;
                break;
            }
            else{
                first++;
                second++;
            }
        }
        return false;
    }
};