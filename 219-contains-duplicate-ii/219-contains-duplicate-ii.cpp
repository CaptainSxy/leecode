class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(mp.find(num)==mp.end()){
                mp[num] = i;
            }
            else{
                if(i-mp[num]<=k)
                    return true;
                else
                    mp[num] = i;
            }
        }
        return false;
    }
};