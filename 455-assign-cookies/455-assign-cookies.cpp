class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = 0;
        for(int i=0;i<s.size();i++){
            if(j>=g.size())
                break;
            if(s[i]>=g[j])
                j++;
        }
        return j;
    }
};