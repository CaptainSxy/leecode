class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, zero_num=0;
        while(i<nums.size()){
            if(nums[i]==0){
                zero_num++;
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin(), 0);
            }
            else if(nums[i]==1){
                nums.erase(nums.begin()+i);
                nums.insert(nums.begin()+zero_num, 1);
            }
            i++;
        }
    }
};