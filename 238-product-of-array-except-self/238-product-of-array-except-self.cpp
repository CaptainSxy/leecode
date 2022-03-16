class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> L(n);
        vector<int> R(n);
        vector<int> ans(n);
        L[0] = nums[0];
        for(int i=1;i<n;i++){
            L[i] = nums[i] * L[i-1]; 
        }
        R[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            R[i] = nums[i] * R[i+1]; 
        }
        for(int i=0;i<n;i++){
            if(i==0)
                ans[i] = R[i+1];
            else if(i==n-1)
                ans[i] = L[i-1];
            else   
                ans[i] = L[i-1] * R[i+1];
        }
        return ans;
    }
};