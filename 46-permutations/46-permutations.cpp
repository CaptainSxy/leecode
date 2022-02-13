class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void dfs(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(find(temp.begin(),temp.end(),nums[i])==temp.end()){
                temp.push_back(nums[i]);
                if(temp.size()==nums.size()){
                   ans.push_back(temp);
                }
                else
                    dfs(nums);
                temp.pop_back();
            }

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums);
        return ans;
    }
};