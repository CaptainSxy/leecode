class Solution {
public:
    int jump(vector<int>& nums) {
        int maxPos = 0;
        int step = 0;
        int end = 0;
        if(nums.size()==1)
            return 0;
        for(int i=0;i<nums.size();i++){
            // cout<<step<<" "<<maxPos<<endl;
            maxPos = max(maxPos, i+nums[i]);
            if(maxPos>=nums.size()-1){
                step++;
                break;
            }
            if(i==end){
                end = maxPos;
                step++;
            }
        }
        return step;
    }
};