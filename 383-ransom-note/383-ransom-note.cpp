class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(char c:ransomNote){
            int loc = magazine.find(c);
            if(loc != -1)
                magazine.erase(loc, 1);
            else
                return false;
        }
        return true;
    }
};