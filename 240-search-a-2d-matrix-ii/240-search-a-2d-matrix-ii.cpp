class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i=0, j=0;
        if(matrix[0][0]>target)
            return false;
        while(i<m && j<n && j>=0){
            // cout<<i<<" "<<j<<endl;
            if(matrix[i][n-1]==target)
                return true;
            if(matrix[i][n-1]<target)
                i++;
            else{
                if(matrix[i][j]==target)
                    return true;
                if(matrix[i][j]<target)
                    j++;
                else{
                    while(matrix[i][j]>target && j>0)
                        j--;
                    if(matrix[i][j]==target)
                        return true;
                    else
                        i++;
                }
            }
        }
        return false;
    }
};