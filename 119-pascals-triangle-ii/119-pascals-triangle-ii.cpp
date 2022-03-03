class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> yanghui;
        for(int i=0;i<=rowIndex;i++){
            yanghui.push_back({1});
            for(int j=1;j<=i;j++){
                if(j>=yanghui[i-1].size())   
                    yanghui[i].push_back(1);
                else
                    yanghui[i].push_back(yanghui[i-1][j-1]+yanghui[i-1][j]);
            }
        }
        return yanghui[rowIndex];
    }
};