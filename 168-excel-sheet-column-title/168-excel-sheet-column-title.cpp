class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        char c;
        while(columnNumber){
            if(columnNumber%26==0){
                c = 26+64;
                columnNumber -= 26;
            }
            else{
                c = columnNumber%26+64;
            }
            columnNumber /= 26;
            ans.insert(ans.begin(), c);
        }
        return ans;
    }
};