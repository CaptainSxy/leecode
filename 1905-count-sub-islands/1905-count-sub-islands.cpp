class Solution {
public:
    const int dx[4]={-1,0,0,1};
    const int dy[4]={0,-1,1,0};
    int flag = true;
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, vector<vector<int>>&path, int x, int y){
        if(path[x][y]==1)
            return;
        path[x][y] = 1;
        if(grid2[x][y]!=grid1[x][y])
            flag = false;
        for(int i=0;i<4;i++){
            int new_x = x + dx[i], new_y = y + dy[i];
            if(new_x>=0 && new_x<grid2.size() && new_y>=0 && new_y<grid2[0].size() && path[new_x][new_y]==0 && grid2[new_x][new_y]==1)
                dfs(grid1, grid2, path, new_x, new_y);
        }
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid2.size(), n = grid2[0].size();
        vector<vector<int>> path(m, vector<int>(n, 0));
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==0)
                    path[i][j] = 1;
                else if(path[i][j]==1)
                    continue;
                else{
                    dfs(grid1, grid2, path, i, j);
                    if(flag)
                        count++;
                    flag = true;
                }
                    
            }
        }
        return count;
    }
};