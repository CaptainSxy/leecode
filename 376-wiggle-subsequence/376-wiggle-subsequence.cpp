class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> up(n), down(n);
        if(n<2)
            return n;
        up[0] = 1;
        down[0] = 1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                up[i] = up[i-1];
                down[i] = down[i-1];
            }
            else if(nums[i]>nums[i-1]){
                up[i] = up[i-1];
                down[i] = max(up[i-1]+1, down[i-1]);
            }
            else{
                up[i] = max(up[i-1], down[i-1]+1);
                down[i] = down[i-1];
            }
        }
        return max(up[n-1], down[n-1]);
    }
};

//答案