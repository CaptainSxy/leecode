class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1, 0);
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            // cout<<"i="<<i<<", ";
            dp[i-1] = max(i-1, dp[i-1]);
            for(int j=1; j<i; j++){
                // cout<<j<<"*"<<"dp"<<i-j<<"  ";
                // cout<<dp[i-j]*j<<" ";
                dp[i] = max(dp[i], dp[i-j]*j);
            }

            // cout<<"dp["<<i<<"]="<<dp[i]<<endl;
        }
        return dp[n];
    }
};