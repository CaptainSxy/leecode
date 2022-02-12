class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int k = 0;
        for(int i=m-1;i>=0;i--){
            if(matrix[i][0]<=target){
                k = i;
                break;
            }
        }
        cout<<"i="<<k<<endl;
        for(int j=0;j<n;j++){
            cout<<matrix[k][j]<<endl;
            if(matrix[k][j]==target)
                return true;
            else if(matrix[k][j]<target)
                continue;
            else
                return false;
        }
        return false;
    }
};