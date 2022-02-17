class Solution {
public:
    int signFunc(int num){
        if(num>0)
            return 1;
        else if(num<0)
            return -1;
        else
            return 0;
    }
    int arraySign(vector<int>& nums) {
        int res = 1;
        for(int num:nums){
            res *= signFunc(num);
        }
        return res;
    }
};