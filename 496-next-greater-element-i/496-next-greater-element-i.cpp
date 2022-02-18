class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(-1);
            int num1 = nums1[i];
            int j = find(nums2.begin(),nums2.end(),num1) - nums2.begin()+1;
            for(j;j<nums2.size();j++){
                if(nums2[j]>num1){
                    ans[i]=nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};