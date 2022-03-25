class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        int count=1,curr=0;
        while(nums.size()>1){
            curr = curr%nums.size();
            if(count==k){
                nums.erase(nums.begin()+curr);
                count=1;
            }
            else{
                count++;
                curr++;
            }
        }
        return nums[0];
    }
};