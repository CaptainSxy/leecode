class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void dfs(vector<int> nums, vector<int> temp){
        if(nums.size()==0){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int num = nums[i];
            temp.push_back(num);
            nums.erase(nums.begin()+i);
            dfs(nums, temp);
            nums.insert(nums.begin()+i, num);
            temp.pop_back();
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        dfs(nums, temp);
        return ans;
    }
};