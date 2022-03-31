class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> diff(n);
        vector<vector<int>> ans;
        diff[0] = 0;
        for(int i=1;i<n;i++){
            diff[i] = arr[i]-arr[i-1];
        }
        int mindiff = *min_element(diff.begin()+1, diff.end());
        for(int i=1;i<n;i++){
            if(diff[i]==mindiff){
                ans.push_back({arr[i-1], arr[i]});
            }
        }
        return ans;
    }
};