class Solution {
public:
    const int dx[4] = {-1,0,0,1};
    const int dy[4] = {0,-1,1,0};
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> seen(m, vector<int>(n, 0));
        vector<vector<int>> dist(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    seen[i][j] = 1;
                    q.push({i,j});
                }
            }
        }
        int maxNum = -1;
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int new_x = i+dx[k], new_y = j+dy[k];
                if(new_x>=0 && new_x<m && new_y>=0 && new_y<n && seen[new_x][new_y]==0){
                    seen[new_x][new_y] = 1;
                    dist[new_x][new_y] = dist[i][j] + 1;
                    q.push({new_x, new_y});
                    maxNum = dist[new_x][new_y];
                }
            }
        }
        return maxNum;
    }
};