class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<int>& A, int ind){
        A[ind]=0;
        isConnected[ind][ind] = 0;
        for(int j=0;j<isConnected.size();j++){
            if(isConnected[ind][j]==1){
                isConnected[ind][j] = 0;
                isConnected[j][ind] = 0;
                dfs(isConnected, A, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> A(isConnected.size(), 1);
        int count=0;
        for(int i=0;i<isConnected.size();i++){
            if(A[i]==1){
                count++;
                dfs(isConnected, A, i);
            }
        }
        cout<<endl;
        return count;
    }
};