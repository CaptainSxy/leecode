class Solution {
public:
    const int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    const int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]>0)
            return -1;
        if(grid.size()==1)
            return 1;

        queue<vector<int>> q;
        vector<vector<int>> path(grid.size(), vector<int>(grid[0].size(), 0));

        q.push({0,0});
        int x,y;
        int len = 1;
        while(!q.empty()){
            int n = q.size();
            for(int j=0;j<n;j++){
                vector<int>A = q.front();
                int x=A[0], y=A[1]; 
                path[x][y] = 1;
                q.pop();
                for(int i=0; i<8;i++){
                    int curr_x = x + dx[i];
                    int curr_y = y + dy[i];
                    if(curr_x>=0 && curr_x<grid.size() && curr_y>=0 && curr_y<grid[0].size() && !grid[curr_x][curr_y] && !path[curr_x][curr_y]){
                        q.push({curr_x, curr_y});
                        path[curr_x][curr_y] = 1;
                        // cout<<curr_x<<" "<<curr_y<<" "<<len+1<<endl;
                        if(curr_x==grid.size()-1 && curr_y==grid[0].size()-1)
                            return len+1;
                    }
                }
            }
            len++;
        }

        return -1;
    }
};