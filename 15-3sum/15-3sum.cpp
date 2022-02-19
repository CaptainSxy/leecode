class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int low = i+1, high = nums.size()-1;
            while(low<high){
                if(nums[low]+nums[high]==(0-nums[i])){
                    ans.push_back({nums[i], nums[low], nums[high]});
                    while(nums[low+1]==nums[low]){
                        low++;
                        if(low>=nums.size()-1)//nums.size()
                            break;
                    }
                    while(nums[high-1]==nums[high]){
                        high--;
                        if(high<=1)
                            break;
                    }
                    high--;
                    low++;
                }
                else if(nums[low]+nums[high]>(0-nums[i]))
                    high--;
                else
                    low++;
            }
        }
        return ans;
    }
};