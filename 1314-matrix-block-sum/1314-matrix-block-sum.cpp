class Solution {
public:
    int get(const vector<vector<int>>& pre, int m, int n, int x, int y) {
        x = max(min(x, m), 0);
        y = max(min(y, n), 0);
        return pre[x][y];
    }

    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> answer(m, vector<int>(n));
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1] + mat[i-1][j-1] - dp[i-1][j-1];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                answer[i][j] = get(dp, m, n, i+k+1, j+k+1) - get(dp, m, n, i-k, j+k+1) - get(dp, m, n, i+k+1, j-k) + get(dp, m, n, i-k, j-k);
            }
        }

        return answer;
    }
};

//答案