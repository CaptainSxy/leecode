class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minArr=nums[0], maxArr=nums[0] ,pre_max=0, pre_min=0, total = 0;
        for(int x:nums){
            pre_max = max(x, x+pre_max);
            maxArr = max(pre_max, maxArr);
            pre_min = min(x, x+pre_min);
            minArr = min(pre_min, minArr);
            total += x;
        }
        if(maxArr<0)
            return maxArr;
        else{
            return max(maxArr, total-minArr);
        }
    }
};

//题解