class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        if(nums.size()==0)
            return -1;
        if(nums.size()==1){
            if(nums[0]==target)
                return 0;
            else
                return -1;
        }
        while(low<=high){
          int mid = (high-low)/2 + low;
          if(nums[mid]==target)
            return mid;
          if(nums[0]<=nums[mid]){
            if(nums[0]<=target && target<nums[mid])
              high = mid-1;
            else
              low = mid+1;
          }
          else{
            if(nums[mid]<target && target<=nums[high])
              low = mid + 1;
            else
              high = mid - 1;
          }
        }
        return -1;
    }
};