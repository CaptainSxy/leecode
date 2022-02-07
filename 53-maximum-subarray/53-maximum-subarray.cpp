class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pre=0, maxNum=nums[0];
        for(const auto x:nums){
            pre = max(x, pre+x);
            maxNum = max(maxNum, pre);
        }
        return maxNum;
    }
};