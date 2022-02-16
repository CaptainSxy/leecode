class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>::iterator it;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0)
                continue;
            it = find(nums.begin()+i+1, nums.end(), nums[i]);
            if(it != nums.end()){
                int loc = it - nums.begin();
                nums[i] = 0;
                nums[loc] = 0;
            }
            else
                return nums[i];
        }
        return 0;
    }
};