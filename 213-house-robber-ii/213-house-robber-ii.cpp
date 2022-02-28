class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0], nums[1]);

        int first = nums[0], second = max(nums[0], nums[1]);
        int third = second;
        for(int i=2;i<nums.size()-1;i++){
            third = max(first + nums[i], second);
            first = second;
            second = third;
        }
        // cout<<third<<endl;
        int maxNum = third;
        first = nums[1];
        second = max(nums[1], nums[2]);
        third = second;
        for(int i=3;i<nums.size();i++){
            third = max(first + nums[i], second);
            first = second;
            second = third;
        }
        // cout<<third<<endl;
        maxNum = max(maxNum, third);
        return maxNum;
    }
};