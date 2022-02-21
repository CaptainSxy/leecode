class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)
            return 0;
        int num = 0, val = 1;
        int left = 0, right = 0;
        while(right<nums.size()){
            val *= nums[right];
            while(val>=k){
                val /= nums[left];
                left++;
            }
            num += right-left+1;
            right++;
        }
        return num;
    }
};
//双指针