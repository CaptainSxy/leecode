class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum=0, n=nums.size()/2;
        for(int i=0;i<n;i++)
            sum+=nums[2*i];
        return sum;
    }
};