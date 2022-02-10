class Solution {
public:
    int dx[4]={-1,0,0,1};
    int dy[4]={0,1,-1,0};
    unordered_map<int, int> A;
    void dfs(vector<vector<int>>& grid, int x, int y, int count){
        if(A.find(count)==A.end()){
            pair<int, int> mypair(count, 1);
            A.insert(mypair);
        }
        else{
            A[count]++;
        }
        grid[x][y]=0;
        for(int i=0;i<4;i++){
            int curr_x=x+dx[i];
            int curr_y=y+dy[i];
            if(curr_x>=0 && curr_x<grid.size() && curr_y>=0 && curr_y<grid[0].size()){
                if(grid[curr_x][curr_y]==1)
                    dfs(grid, curr_x, curr_y, count);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(grid, i, j, count);
                    count++;
                }
            }
        }
        int max_num=0;
        for(auto kv:A){
            max_num=max(max_num, kv.second);
        }
        return max_num;
    }
};