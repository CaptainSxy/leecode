class Solution {
public:
    vector<int> nums;
    const int dx[4]={-1,0,0,1};
    const int dy[4]={0,1,-1,0};
    void dfs(vector<vector<int>>& grid, vector<vector<int>>& path, int x, int y){
        path[x][y] = 1;
        if(grid[x][y]==1){
            return;
        }
        for(int i=0;i<4;i++){
            int new_x = x + dx[i], new_y = y + dy[i];
            if(new_x>=0 && new_x<grid.size() && new_y>=0 && new_y<grid[0].size() && path[new_x][new_y]==0 && grid[new_x][new_y]==0){
                dfs(grid, path, new_x, new_y);
            }
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> path(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            dfs(grid, path, i, 0);
            dfs(grid, path, i, n-1);
        }
        for(int j=0;j<n;j++){
            dfs(grid, path, 0, j);
            dfs(grid, path, m-1, j);
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<path[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int count = 0;
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==1){
                    path[i][j]=1;
                }
                else if(grid[i][j]==0 && path[i][j]==0){
                    count++;
                    dfs(grid, path, i, j);
                }
            }
        }
        return count;
    }
};