class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> dp(n+1);
        dp[1] = false;
        dp[2] = true;
        for(int i=3;i<=n;i++){
            for(int j=1;j<i;j++){
                if(j==1){
                    dp[i] = !dp[i-1];
                }
                else if(i%j==0){
                    dp[i] = dp[i] || (!dp[i-j]);
                }
                if(dp[i])
                    break;
            }
        }
        return dp[n];
    }
};