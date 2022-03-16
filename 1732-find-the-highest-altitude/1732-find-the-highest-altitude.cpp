class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size()+1;
        vector<int>high(n);
        high[0] = 0;
        for(int i=1;i<n;i++){
            high[i] = high[i-1] + gain[i-1];
        }
        return *max_element(high.begin(), high.end());
    }
};