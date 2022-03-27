class Solution {
public:
    bool isSubsequence(string s, string t) {
        int start = 0;
        for(int i=0;i<s.size();i++){
            int loc = find(t.begin()+start, t.end(), s[i])-t.begin();
            if(loc==t.size())
                return false;
            else
                start = loc+1;
        }
        return true;
    }
};