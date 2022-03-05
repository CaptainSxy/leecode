class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int maxdp = 0;
        vector<int> dp(n);
        vector<int> cnt(n);
        for(int i=0;i<n; i++){
            dp[i] = 1;
            cnt[i] = 1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(dp[j]+1>dp[i]){
                        cnt[i] = cnt[j];
                    }
                    else if(dp[i]==dp[j]+1){
                        cnt[i] += cnt[j];
                    }
                    dp[i] = max(dp[i], dp[j]+1);
                }
                    
            }
        }

        int sum = 0;
        int maxNum = *max_element(dp.begin(), dp.end());
        for(int k=0;k<dp.size();k++){
            if(dp[k]==maxNum)
                sum+=cnt[k];
        }
            
        return sum;
    }
};