class Solution {
public:
    vector<int> arr;
    Solution(vector<int>& nums) {
        arr = nums;
    }
    
    vector<int> reset() {
        return arr;
    }
    
    vector<int> shuffle() {
        vector<int> temp=arr;
        vector<int> ans;
        while(temp.size()){
            int n = rand() % temp.size();
            ans.push_back(temp[n]);
            temp.erase(temp.begin()+n);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */