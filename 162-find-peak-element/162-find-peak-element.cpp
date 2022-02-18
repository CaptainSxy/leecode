class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int post_num, num, pre_num;
        if(nums.size()==1)
            return 0;
        for(int i=0;i<nums.size();i++){
            num = nums[i];
            if(i==nums.size()-1){
                if(pre_num<num)
                    return nums.size()-1;
            }
            else
                post_num=nums[i+1];

            if(i==0){
                if(post_num<num)
                    return 0;
            }
            else if(pre_num<num && num>post_num)
                return i;
            
            pre_num = num;
        }
        return -1;
    }
};