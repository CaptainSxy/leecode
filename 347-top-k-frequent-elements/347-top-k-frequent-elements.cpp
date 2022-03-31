class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end())
                mp[nums[i]] = 1;
            else
                mp[nums[i]]++;
        }
        vector<int> fre, ans;
        for(auto& kv:mp){
            int v = kv.second;
            fre.push_back(v);
        }
        sort(fre.begin(), fre.end());
        int m = fre[fre.size()-k];
        for(auto& kv:mp){
            int k = kv.first, v = kv.second;
            if(v>=m)
                ans.push_back(k);
        }
        return ans;
    }
};