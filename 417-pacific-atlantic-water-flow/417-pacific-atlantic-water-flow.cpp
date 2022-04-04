class Solution {
public:
    const int dx[4] = {-1,0,0,1};
    const int dy[4] = {0,1,-1,0};
    // vector<vector<int>> vec;
    void dfs(vector<vector<int>>& heights, vector<vector<int>>& seen, int x, int y){
        if(seen[x][y]==1)
            return;
        seen[x][y] = 1;
        for(int i=0;i<4;i++){
            int newx = x + dx[i], newy = y + dy[i];
            if(newx>=0 && newx<heights.size() && newy>=0 && newy<heights[0].size() && heights[newx][newy]>=heights[x][y]){
                dfs(heights, seen, newx, newy);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> seen1(m, vector<int>(n, 0));
        vector<vector<int>> seen2(m, vector<int>(n, 0));
        int dx1[2] = {0,1}, dy1[2] = {1,0};
        for(int i=0;i<m;i++){
            if(seen1[i][0]==0)
                dfs(heights, seen1, i, 0);
        }
        for(int j=0;j<n;j++){
            if(seen1[0][j]==0)
                dfs(heights, seen1, 0, j);
        }
        int dx2[2] = {-1,0}, dy2[2] = {0,-1};
        for(int i=0;i<m;i++){
            if(seen2[i][n-1]==0)
                dfs(heights, seen2, i, n-1);
        }
        for(int j=0;j<n;j++){
            if(seen2[m-1][j]==0)
                dfs(heights, seen2, m-1, j);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(seen1[i][j]==1 && seen2[i][j]==1)
                    ans.push_back({i,j});
            }
        }
        return ans;
    }
};