class Solution {
public:
    int check(string &s, int left, int right){
        while(s[left]==s[right]){
            left--;
            right++;
            if(left<0)
                break;
            if(right>=s.size()){
                if(s[left]==s[right-1])
                    left--;
                break;
            }
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        int left, right;
        int maxLen = 0, start = 0;
        if(s.size()==1)
            return s;
        for(int i=0;i<s.size()-1;i++){
            left = i;
            right = i+1;
            if(s[i]!=s[i+1] && i-1>=0)
                left = i-1;

            int len = check(s, left, right);

            if(i-1>=0 && s[i-1]==s[i+1]){
                left = i-1;
                len = max(len, check(s, left, right));
            }

            if(maxLen<len){
                maxLen = len;
                if(maxLen%2){
                    start = i - maxLen/2;
                }
                else
                    start = i - maxLen/2 + 1;
            }
            // cout<<i<<" "<<left<<" "<<right<<" "<<maxLen<<" "<<start<<endl;
        }
        if(maxLen==0)
            return s.substr(0, 1);
        return s.substr(start, maxLen);
    }
};