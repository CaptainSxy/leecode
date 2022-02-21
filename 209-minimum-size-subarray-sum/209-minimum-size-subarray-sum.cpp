class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = 1e9, sum=0;
        int left = 0, right = 0;
        if(nums.size()==0)
            return 0;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                minLen = min(minLen, right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        if(minLen > nums.size())
            return 0;
        return minLen;
    }
};