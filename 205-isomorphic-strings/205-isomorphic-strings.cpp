class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_set<char> tchar;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = t[i];
                if(tchar.find(t[i])==tchar.end())
                    tchar.insert(t[i]);
                else
                    return false;
            }
            else{
                if(mp[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
    }
};