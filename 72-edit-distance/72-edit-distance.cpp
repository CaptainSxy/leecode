class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size()+1, vector<int>(word2.size()+1));
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                if(i==0) dp[0][j] = j;
                else if(j==0) dp[i][0] = i;
                else{
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
                    if(word1[i-1]!=word2[j-1])
                        dp[i][j] = min(dp[i][j], dp[i-1][j-1]);    
                    else
                        dp[i][j] = min(dp[i][j], dp[i-1][j-1]-1);
                    dp[i][j]++;                        
                }
            }
        }
        return dp.back().back();
    }
};

//答案