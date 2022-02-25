class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& nums, vector<int> temp, int depth){
        if(depth>=nums.size())
            return;
        temp.push_back(nums[depth]);
        ans.push_back(temp);
        dfs(nums, temp, depth+1);
        temp.pop_back();
        dfs(nums, temp, depth+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        ans.push_back(temp);
        if(nums.size()==0)
            return ans;
        dfs(nums, temp, 0);
        return ans;
    }
};