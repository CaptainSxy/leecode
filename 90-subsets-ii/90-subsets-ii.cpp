class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void dfs(bool choosePre, int curr, vector<int>& nums){
        if(curr>=nums.size()){
            ans.push_back(temp);
            return;
        }
        dfs(false, curr+1, nums);
        if(!choosePre && curr>0 && nums[curr-1]==nums[curr])
            return;
        temp.push_back(nums[curr]);
        dfs(true, curr+1, nums);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        dfs(false, 0, nums);
        return ans;
    }
};