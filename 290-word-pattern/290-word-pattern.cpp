class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                str.push_back(temp);
                temp.clear();
            }
            else{
                temp.push_back(s[i]);
            }
        }
        str.push_back(temp);
        if(pattern.size()!=str.size())
            return false;
        unordered_map<char, string> mp;
        unordered_set<string> st;
        for(int i=0;i<pattern.size();i++){
            char c = pattern[i];
            if(mp.find(c)==mp.end()){
                mp[c]=str[i];
                if(find(st.begin(), st.end(), str[i])==st.end())
                    st.insert(str[i]);
                else
                    return false;
            }
            else{
                if(mp[c]!=str[i])
                    return false;
            }
        }
        return true;
    }
};