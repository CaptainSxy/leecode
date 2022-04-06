class Solution {
public:
    const int dx[4] = {-1,0,0,1};
    const int dy[4] = {0,1,-1,0};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size(), n = maze[0].size();
        vector<vector<int>> path(m, vector<int>(n, 0));
        queue<pair<int, int>> q;
        int x = entrance[0], y = entrance[1];
        q.push({x, y});
        path[x][y] = 1;
        int distance = 0;
        while(!q.empty()){
            auto [i,j] = q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int new_x = i + dx[k], new_y = j + dy[k];
                if(new_x>=0 && new_x<m && new_y>=0 && new_y<n && maze[new_x][new_y]=='.' && path[new_x][new_y]==0){
                    path[new_x][new_y] = path[i][j] + 1;
                    q.push({new_x, new_y});
                    // cout<<new_x<<" "<<new_y<<" "<<path[new_x][new_y]<<endl;
                    if(new_x==0 || new_y==0 || new_x==m-1 || new_y==n-1){
                        if(distance==0)
                            distance = path[new_x][new_y];
                        else
                            distance = min(distance, path[new_x][new_y]);
                    }
                    // cout<<distance<<endl;
                }
            }
        }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++)
        //         cout<<path[i][j]<<" ";
        //     cout<<endl;
        // }
        if(distance==0) 
           return -1;
        else
            return distance-1;
    }
};