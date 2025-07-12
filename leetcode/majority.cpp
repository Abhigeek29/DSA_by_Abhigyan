class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        unordered_map<int , int> frequency;
        for(auto it:nums){
            frequency[it]++;
        }
        for(auto ch : frequency){
            if(ch.second> n/2){
                max = ch.first;
                break;
            }
        }
        return max;
    }
}