class Solution {
public:
    const int dx[4]={-1,0,0,1};
    const int dy[4]={0,1,-1,0};
    void dfs(vector<vector<char>>& grid, int x, int y){
        grid[x][y] = '0';
        for(int i=0;i<4;i++){
            int x_curr = x+dx[i];
            int y_curr = y+dy[i];
            if(x_curr>=0 && x_curr<grid.size() && y_curr>=0 && y_curr<grid[0].size()){
                if(grid[x_curr][y_curr]=='1'){
                    dfs(grid, x_curr, y_curr);
                }
            }      
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};