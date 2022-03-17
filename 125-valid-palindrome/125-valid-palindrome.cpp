class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s1.push_back(s[i]+32);
            }
            else if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
                s1.push_back(s[i]);
            }
        }
        int left = 0, right = s1.size()-1;
        while(left<right){
            char cl = s1[left];
            char cr = s1[right];
            if(cl != cr)
                return false;
            left++;
            right--;
        }
        return true;
    }
};