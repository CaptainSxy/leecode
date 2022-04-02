class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int sum = nums[0], n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
                continue;
            }
            sum += nums[i];
        }
        int num = (1+n)*n/2 - sum;
        ans.push_back(num);
        return ans;
    }
};