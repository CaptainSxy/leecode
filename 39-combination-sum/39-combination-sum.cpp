class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, vector<int> temp, int target, int sum, int curr){
        for(int i=curr;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            sum += candidates[i];
            if(sum==target){
                ans.push_back(temp);
                return;
            }
            if(sum>target)
                return;
            dfs(candidates, temp, target, sum, i);
            temp.pop_back();
            sum -= candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, temp, target, 0, 0);
        return ans;
    }
};