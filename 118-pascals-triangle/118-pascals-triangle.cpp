class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> yanghui;
        vector<int> row;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<i;j++){
                if(j==0)
                    row.push_back(1);
                else{
                    row.push_back(yanghui[i-1][j-1]+yanghui[i-1][j]);
                }
            }
            row.push_back(1);
            yanghui.push_back(row);
            row.clear();
        }
        return yanghui;
    }
};