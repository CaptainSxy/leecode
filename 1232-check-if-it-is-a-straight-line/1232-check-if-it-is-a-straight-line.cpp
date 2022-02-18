class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float x1=coordinates[0][0],y1=coordinates[0][1];
        float x2=coordinates[1][0],y2=coordinates[1][1];
        float k,b;
        if(x2-x1!=0){
            k = (y2-y1)/(x2-x1);
            b = y1-k*x1;
            for(int i=2;i<coordinates.size();i++){
                int x = coordinates[i][0];
                int y = coordinates[i][1];
                if(y!=k*x+b)
                    return false;
            }
        }
        else{
            for(int i=2;i<coordinates.size();i++){
                int x = coordinates[i][0];
                if(x!=x1)
                    return false;
            }
        }
        return true;
    }
};