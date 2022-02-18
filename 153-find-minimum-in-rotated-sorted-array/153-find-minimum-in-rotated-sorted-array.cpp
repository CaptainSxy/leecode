class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int minNum = nums[low];
        while(low<=high){
            int mid = (high-low)/2 + low;
            if(nums[high]<=minNum){
                if(nums[mid]<minNum){
                    minNum = nums[mid];
                    high = mid - 1;
                }
                else{
                    minNum = nums[high];
                    low = mid+1;
                }
            }
            else{
                return minNum;
            }
        }
        return minNum;
    }
};