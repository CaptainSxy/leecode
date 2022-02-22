class Solution {
public:
    string freqAlphabets(string s) {
        string s1;
        int i = 0;
        while(i+2<s.size()){
            if(s[i+2]!='#'){
                s1.push_back(s[i]+48);
                i++;
            }
            else{
                char c = (s[i]-48)*10+(s[i+1]-48)+96;
                s1.push_back(c);
                i = i+3;
            }
        }
        while(i<s.size()){
            s1.push_back(s[i]+48);
            i++;
        }
        return s1;
    }
};