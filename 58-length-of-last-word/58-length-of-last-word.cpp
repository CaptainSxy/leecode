class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        char prechar=' ';
        while(s.size()){
            if(prechar!=' ' && s.back()==' ')
                break;
            if(s.back()!=' ')
                count++;
            prechar = s.back();
            s.pop_back();
        }
        return count;
    }
};