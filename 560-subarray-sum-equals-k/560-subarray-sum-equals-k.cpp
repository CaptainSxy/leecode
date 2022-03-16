class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), count = 0 ,pre = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            pre += nums[i];
            // cout<<"pre="<<pre<<endl;
            if(mp.find(pre)==mp.end())
                mp[pre] = 1;
            else
                mp[pre]++;
            int key = pre - k;
            // cout<<"key="<<key<<endl;
            if(mp.find(key)!=mp.end()){
                if(key == pre)
                    count += mp[key]-1;
                else
                    count += mp[key];
            }
                
        }
        return count;
    }
};