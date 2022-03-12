class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0)
                    dp[0][0] = grid[0][0];
                else if(i==0 && j!=0){
                    dp[0][j] = dp[0][j-1] + grid[0][j];
                }
                else if(j==0 && i!=0){
                    dp[i][0] = dp[i-1][0] + grid[i][0];
                }
                else{
                    dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
                }
            }
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[m-1][n-1];
    }
};