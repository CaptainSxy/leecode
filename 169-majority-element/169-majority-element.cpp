class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> A;
        for(int i=0;i<nums.size();i++){
            if(A.find(nums[i])==A.end()){
                A.insert({nums[i], 1});
            }
            else
                A[nums[i]]++;
            if(A[nums[i]]>nums.size()/2)
                return nums[i];
        }
        return 0;
    }
};