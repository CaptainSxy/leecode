class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> mp(nums.back()+1, 0);
        vector<int> dp(nums.back()+1, 0);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        dp[1] = mp[1];
        for(int i=2;i<dp.size();i++){
            dp[i] = max(dp[i-2] + i * mp[i], dp[i-1]);
            cout<<"i="<<i<<" "<<"dpi="<<dp[i]<<endl;
        }
        return dp.back();
    }
};