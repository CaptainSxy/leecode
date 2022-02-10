class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(), n=mat[0].size();
        if(m*n!=r*c)
            return mat;
        else{
            vector<vector<int>> new_mat(r, vector<int>(c, 0));
            int new_i=0, new_j=0;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    int ind=i*n+j;
                    new_i=ind/c;
                    new_j=ind%c;
                    new_mat[new_i][new_j]=mat[i][j];
                }
            }
            return new_mat;
        }
    }
};