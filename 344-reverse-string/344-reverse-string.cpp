class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size()-1;
        for(int i=0; i<=len; i++){
            int new_i= len - i;
            swap(s[i], s[new_i]);
            if(new_i-i<=1)
                break;
        }
    }
};