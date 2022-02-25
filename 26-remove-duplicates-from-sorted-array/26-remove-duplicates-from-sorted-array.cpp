class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int curr_num = nums[0], i=1;
        while(i<nums.size()){
            if(nums[i]==curr_num){
                nums.erase(nums.begin()+i);
            }
            else{
                curr_num = nums[i];
                i++;
            }
        }
        return nums.size();
    }
};