class Solution {
public:
    const int dx[4]={-1, 0, 0, 1};
    const int dy[4]={0, 1, -1, 0};
    void solve(vector<vector<char>>& board) {
        queue<vector<int>> q;
        vector<vector<char>> path(board.size(), vector<char>(board[0].size(), 0));
        int m = board.size(), n = board[0].size();
        for(int i=0;i<m;i++){
            if(board[i][0]=='O')
                q.push({i,0});
            if(board[i][n-1]=='O')
                q.push({i, n-1});
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                q.push({0,i});
            if(board[m-1][i]=='O')
                q.push({m-1, i});
        }
        // cout<<q.size();
        while(!q.empty()){
            vector<int>temp = q.front();
            int x = temp[0], y = temp[1];
            q.pop();
            for(int i=0;i<4;i++){
                int curr_x = x+dx[i];
                int curr_y = y+dy[i];
                if(curr_x>=0 && curr_x<board.size() && curr_y>=0 && curr_y<board[0].size() && board[curr_x][curr_y]=='O' && !path[curr_x][curr_y]){
                    path[curr_x][curr_y] = 1;
                    q.push({curr_x, curr_y});
                }
            }
        }

        for(int i=1;i<m-1;i++){
            for(int j=1; j<n-1; j++)
                if(board[i][j]=='O' && !path[i][j])
                    board[i][j]='X';
        }
    }
};