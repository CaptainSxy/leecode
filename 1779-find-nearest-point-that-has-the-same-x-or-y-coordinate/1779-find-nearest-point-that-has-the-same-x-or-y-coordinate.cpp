class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min_dist = 0;
        int ind = -1;
        for(int i=0;i<points.size();i++){
                int x1 = points[i][0];
                int y1 = points[i][1];
                if(x1==x || y1==y){
                    int dist = abs(x1-x) + abs(y1-y);
                    if(ind==-1){
                        min_dist = dist;
                        ind = i;
                    }
                    else{
                        if(dist<min_dist){
                            min_dist = min(min_dist, dist);
                            ind = i;
                        }
                    }
                }
        }
        return ind;
    }
};