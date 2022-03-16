class Solution {
public:
    int secondHighest(string s) {
        vector<int> nums;
        for(char c:s){
            int num = c-48;
            if(num>=0 && num<=9){
                nums.push_back(num);
            }
        }
        sort(nums.begin(), nums.end());
        if(nums.size()<=1)
            return -1;
        int maxNum = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<maxNum)
                return nums[i];
        }
        return -1;
    }
};