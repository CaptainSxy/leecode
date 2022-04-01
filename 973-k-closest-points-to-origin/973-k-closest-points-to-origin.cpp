class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            int dis = pow(points[i][0],2)+pow(points[i][1],2);
            vec.push_back({i, dis});
        }
        sort(vec.begin(), vec.end(),[](const pair<int, int>&a, const pair<int, int>&b){
            return a.second < b.second;
        });
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            int ind = vec[i].first;
            ans.push_back(points[ind]);
        }
        return ans;
    }
};