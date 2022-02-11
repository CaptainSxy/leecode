class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int w = matrix.size(), h = matrix[0].size();
        vector<vector<int>> new_mat(w,vector<int>(h,1));
        for(int i=0;i<w;i++){
            for(int j=0;j<h;j++){
                if(matrix[i][j]==0){
                    new_mat[i][j]=0;
                    for(int m=0;m<w;m++)
                        new_mat[m][j]=0;
                    for(int n=0;n<h;n++)
                        new_mat[i][n]=0;
                }
            }
        }
        for(int i=0;i<w;i++)
            for(int j=0;j<h;j++)
                matrix[i][j] = matrix[i][j] * new_mat[i][j];
    }
};