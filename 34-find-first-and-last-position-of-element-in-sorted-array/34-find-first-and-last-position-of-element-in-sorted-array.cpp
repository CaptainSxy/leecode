class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low<=high){
            int mid = (high - low)/2 + low;
            if(nums[mid]>target){
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else{
                high = mid;
                low = mid;
                while(nums[low]==target){
                    low = low-1;
                    if(low<0)
                        break;
                }
                while(nums[high]==target){
                    high = high+1;
                    if(high>=nums.size())
                        break;
                }
                vector<int>ans{low+1, high-1};
                return ans;
            }
        }
        vector<int>ans{-1, -1};
        return ans;
    }
};