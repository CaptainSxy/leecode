class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int diff = nums[1] - nums[0];
        int count = 2, sum = 0;
        for(int i=2;i<nums.size();i++){
            if(nums[i] - nums[i-1]==diff){
                count++;
                sum += count - 2;
            }
            else{
                count = 2;
                diff = nums[i] - nums[i-1];
            }
        }
        return sum;
    }
};