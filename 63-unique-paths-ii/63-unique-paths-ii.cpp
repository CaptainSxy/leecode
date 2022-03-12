class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] || obstacleGrid.back().back())
            return 0;
        vector<vector<int>> path(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
        path[0][0] = 1;
        for(int i=0;i<obstacleGrid.size();i++){
            if(i!=0 && !obstacleGrid[i][0])
                path[i][0] = path[i-1][0];
            for(int j=1;j<obstacleGrid[0].size();j++){
                if(i==0){
                    if(obstacleGrid[i][j] == 1)
                        break;
                    else
                        path[i][j] = 1;
                }      
                else{
                    if(obstacleGrid[i][j] == 1)
                        continue;
                    else{
                        // cout<<i<<" "<<j<<" "<<path[i-1][j]<<" "<<path[i][j-1]<<endl;
                        path[i][j] += (path[i-1][j] + path[i][j-1]);
                    }       
                }
            }
        }
        // for(int i=0;i<obstacleGrid.size();i++){
        //     for(int j=0;j<obstacleGrid[0].size();j++){
        //         cout<<path[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return path.back().back();
    }
};