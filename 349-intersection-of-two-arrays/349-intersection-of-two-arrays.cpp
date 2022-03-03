class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> N1(nums1.begin(), nums1.end());
        unordered_set<int> N2(nums2.begin(), nums2.end());
        vector<int> res;
        for(auto k:N1){
            if(N2.find(k)!=N2.end())
                res.push_back(k);
        }
        return res;
    }
};