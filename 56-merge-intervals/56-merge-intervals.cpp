class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==1)
            return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int minNum = intervals[0][0], maxNum = intervals[0][1];
        for(int i=1;i<n;i++){
            if(maxNum >= intervals[i][0]){
                maxNum = max(maxNum, intervals[i][1]);
            }
            else{
                ans.push_back({minNum, maxNum});
                minNum = intervals[i][0];
                maxNum = intervals[i][1];
            }
        }
        ans.push_back({minNum, maxNum});
        return ans;
    }
};