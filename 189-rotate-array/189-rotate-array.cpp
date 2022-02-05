class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newarr(nums.size());
        for(int i=0;i<nums.size();i++){
            int new_i = (i+k)%(nums.size());
            newarr[new_i] = nums[i];
        }
        nums = newarr;
    }
};