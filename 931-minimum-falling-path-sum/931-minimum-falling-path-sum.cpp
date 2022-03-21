class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> visited(m, vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0)
                    visited[i][j] = matrix[i][j];
                else{
                    if(j-1<0)
                        visited[i][j]=matrix[i][j] + min(visited[i-1][j], visited[i-1][j+1]);
                    else if(j+1>=n)
                        visited[i][j]=matrix[i][j] + min(visited[i-1][j-1], visited[i-1][j]);
                    else
                        visited[i][j]=matrix[i][j] + min(visited[i-1][j-1], min(visited[i-1][j], visited[i-1][j+1]));
                }
            }
        }
        return *min_element(visited.back().begin(), visited.back().end());
    }
};