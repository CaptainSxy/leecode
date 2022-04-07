class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        cout<<n;
        if(nums[0]>=n) return n;
        for(int i=1;i<n;i++){
            int x = n - i;
            if(nums[i]>=x && nums[i-1]<x){
                return x;
            }
        }
        return -1;
    }
};