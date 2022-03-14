class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> maxF(nums.size()), minF(nums.size());
        maxF[0] = nums[0];
        minF[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            maxF[i] = max(maxF[i-1]*nums[i], max(minF[i-1]*nums[i], nums[i]));
            minF[i] = min(maxF[i-1]*nums[i], min(minF[i-1]*nums[i], nums[i]));
        }
        return *max_element(maxF.begin(), maxF.end());
    }
};

//答案