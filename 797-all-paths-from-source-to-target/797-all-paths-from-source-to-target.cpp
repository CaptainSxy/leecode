class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<vector<int>>& graph, int group_num, vector<int> temp){
        vector<int> points = graph[group_num];
        if(points.size()==0){  
            return;
        }
        for(int i=0;i<points.size();i++){
            temp.push_back(points[i]);
            if(points[i]==graph.size()-1){
                ans.push_back(temp);
            }
            dfs(graph, points[i], temp);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> temp{0};
        dfs(graph, 0, temp);
        return ans;
    }
};