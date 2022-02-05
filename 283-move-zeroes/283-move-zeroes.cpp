class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> newarr(nums.size(), 0);
        int p = 0;
        for(int num:nums){
            if(num){
                newarr[p] = num;
                p++;
            }
        }
        nums = newarr;
    }
};