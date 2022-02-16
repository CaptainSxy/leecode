class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int a,b,c;
        for(int i;i<nums.size()-2;i++){
            a = nums[i];
            b = nums[i+1];
            c = nums[i+2];
            if(a>=b+c)
                continue;
            else{
                return a+b+c;
            }
        }
        return 0;
    }
};