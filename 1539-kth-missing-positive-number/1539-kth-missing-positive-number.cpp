class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num = 1, i = 0;
        vector<int> nums;
        while(num<arr.back()){
            if(num<arr[i]){
                nums.push_back(num);
                if(nums.size()==k)
                    return nums.back();
            }
            else
                i++;
            num++;
        }
        while(nums.size()<k){
            return arr.back()+k-nums.size();
        }
        return -1;
    }
};