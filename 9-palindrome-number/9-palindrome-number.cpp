class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> res;
        while(x){
            res.push_back(x%10);
            x /= 10;
        }
        for(int i=0;i<res.size()/2;i++){
            if(res[i]!=res[res.size()-1-i])
                return false;
        }
        return true;
    }
};