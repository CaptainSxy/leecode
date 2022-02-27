class Solution {
public:
    bool flag = false;
    const int dx[4]={-1, 0, 0, 1};
    const int dy[4]={0, 1, -1, 0};
    void dfs(vector<vector<char>>& board, string word, int curr, int x, int y){  // &更快  不加&会超时
        char c = board[x][y];
        board[x][y] = 0;
        if(curr>=word.size()){
            flag = true;
            return;
        }
        for(int i=0;i<4;i++){
            int curr_x = x+dx[i];
            int curr_y = y+dy[i];
            if(curr_x>=0 && curr_x<board.size() && curr_y>=0 && curr_y<board[0].size()){
                if(board[curr_x][curr_y]==word[curr]){
                    // board[curr_x][curr_y] = 0;
                    dfs(board, word, curr+1, curr_x, curr_y);
                }
                    
            }
        }
        board[x][y] = c;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0])
                    dfs(board, word, 1, i, j);
            }
        }
        return flag;
    }
};