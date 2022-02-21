class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()<p.size())
            return ans;
        vector<int> S1(26);
        vector<int> P(26);
        for(int i=0;i<p.size();i++){
            S1[s[i]-97]++;
            P[p[i]-97]++;
        }
        if(S1==P)
            ans.push_back(0);
    
        for(int i=0;i<s.size()-p.size(); i++){
            S1[s[i]-97]--;
            S1[s[i+p.size()]-97]++;
            if(S1==P)
                ans.push_back(i+1);
        }
        return ans;
    }
};