class Solution {
public:
    bool isAnagram(string s, string t) {
        for(char c:s){
            int loc = t.find(c);
            if(loc != -1){
                t.erase(loc, 1);
            }
            else
                return false;
        }
        if(t.size()>0)
            return false;
        return true;
    }
};