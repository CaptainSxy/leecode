class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        string temp;
        int low = 0, high = 0;
        while(high<nums.size()){
            if(high==nums.size()-1 || nums[high+1]>0 && nums[high]<0 || nums[high+1]-nums[high]>1){
                if(low==high){
                    temp.append(to_string(nums[low]));
                }
                else{
                    temp.append(to_string(nums[low]));
                    temp.append("->");
                    temp.append(to_string(nums[high]));
                }
                ans.push_back(temp);
                temp.clear();
                low = high+1;
            }
            high++;
        }
        return ans;
    }
};