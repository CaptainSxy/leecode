class Solution {
public:
    // int flag = false;
    unordered_set<int> A;
    bool dfs(vector<int>& nums, int curr){
        // cout<<curr<<endl;
        if(curr<0)
            return false;
        // cout<<A.empty()<<endl;
        if(A.empty()){
            // cout<<nums[curr]<<" "<<nums.size()-1-curr<<endl;
            if(nums[curr]<nums.size()-1-curr){
                return dfs(nums, curr-1);
            }
            else{
                if(curr==0)
                    return true;
                A.insert(curr);
                return dfs(nums, curr-1);
            }
        }
        else{
            for(int i=1;i<=nums[curr];i++){
                // cout<<curr<<" "<<i<<endl;
                if(A.find(curr+i)!=A.end()){
                    A.insert(curr);
                    if(curr==0)
                        return true;
                    return dfs(nums, curr-1);
                    break;
                }
            }
            return dfs(nums, curr-1);
        }
        return false;
    }

    bool canJump(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        if(nums.size()==2)
            return max(nums[0], 0);

        return dfs(nums, nums.size()-2);
    }
};