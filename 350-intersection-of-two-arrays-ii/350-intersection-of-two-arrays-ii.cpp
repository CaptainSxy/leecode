class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> A;
        if(nums1.size()>nums2.size()){
            for(int num:nums2){
                vector<int>::iterator loc = find(nums1.begin(), nums1.end(), num);
                if(loc!=nums1.end()){
                    A.push_back(num);
                    nums1.erase(loc);
                }
            }
        }
        else{
            for(int num:nums1){
                vector<int>::iterator loc = find(nums2.begin(), nums2.end(), num);
                if(loc!=nums2.end()){
                    A.push_back(num);
                    nums2.erase(loc);
                }
            }
        }
        return A;
    }
};