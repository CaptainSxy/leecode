class Solution {
private:
    static constexpr int dirs[4][2]={{-1,0},{0,1},{0,-1},{1,0}}; 

public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> seen(m, vector<int>(n));
        vector<vector<int>> dist(m, vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 2){
                    q.emplace(i,j);
                    seen[i][j]=1;
                    dist[i][j]=0;
                }
            }
        }
        int minute=0;
        while(!q.empty()){
            auto [i,j]=q.front();
            q.pop();
            for(int d=0;d<4;d++){
                int di=i+dirs[d][0];
                int dj=j+dirs[d][1];
                if(di>=0 && di<m && dj>=0 && dj<n && !seen[di][dj] && grid[di][dj]==1){
                    dist[di][dj]=dist[i][j]+1; //好橘子到坏橘子距离
                    seen[di][dj]=1; //标注已经看过的橘子
                    grid[di][dj]=2; //好橘子变坏橘子
                    q.emplace(di, dj);
                    minute=dist[di][dj];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        return minute;
    }
};