class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int flag=true;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    for(int dx=1;dx<board.size()-i;dx++){
                        if(board[i+dx][j]==board[i][j]){
                            return false;
                        }
                    }
                    for(int dy=1;dy<board[0].size()-j;dy++){
                        if(board[i][j+dy]==board[i][j]){
                            return false;
                        }
                    }
                    for(int delta_y=j%3+1;delta_y<3;delta_y++){
                        for(int delta_x=0;delta_x<3;delta_x++){
                            if(board[i/3*3+delta_x][j/3*3+delta_y]==board[i][j]){
                                return false;
                            }
                        }
                    }
                }
                else
                    continue;
            }
        }
        return flag;
    }
};