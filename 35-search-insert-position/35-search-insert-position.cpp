class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int mid = (high - low) / 2 + low;
        while(low <= high){
            int mid = (high - low) / 2 + low;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if(high<0)
          return 0;
        else
          return low;
    }
};