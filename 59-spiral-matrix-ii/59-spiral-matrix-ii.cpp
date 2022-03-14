class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i,j,num=0;
        vector<vector<int>> matrix(n, vector<int>(n));
        for(i=0; i<n/2; i++){
            for(j=i;j<n-1-i;j++){
                num++;
                matrix[i][j] = num;
                matrix[j][n-1-i] = num+n-2*i-1;
                matrix[n-1-i][n-1-j] = num+2*(n-2*i-1);
                matrix[n-1-j][i] = num+3*(n-2*i-1);
            }
            num = matrix[i+1][i];
        }
        if(n%2)
            matrix[n/2][n/2] = n*n;
        return matrix;
    }
};