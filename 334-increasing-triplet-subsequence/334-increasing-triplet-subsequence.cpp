class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> L(n), R(n);
        L[0] = nums[0];
        for(int i=1;i<n;i++){
            L[i] = min(L[i-1], nums[i-1]);
        }
        R[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            R[i] = max(R[i+1], nums[i+1]);
        }
        for(int i=1;i<n-1;i++){
            if(nums[i]>L[i] && nums[i]<R[i])
                return true;
        }
        return false;
    }
};