class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int res = i - j*j;
                if(res<0)
                    break;
                if(dp[i]==0)
                    dp[i] = dp[res] + 1;
                else
                    dp[i] = min(dp[res]+1, dp[i]);
            }
        }
        return dp.back();
    }
};