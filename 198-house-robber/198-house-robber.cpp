class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0], nums[1]);
        int second = nums[0], third = max(nums[0], nums[1]);
        for(int i=2; i<nums.size(); i++){
            int first = second;
            second = third;
            third = max(first+nums[i], second);
        }
        return third;
    }
};