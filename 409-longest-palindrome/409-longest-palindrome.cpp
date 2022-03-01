class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> A;
        bool odd = false;
        for(int i=0;i<s.size();i++){
            if(A.find(s[i])==A.end())
                A.insert({s[i], 1});
            else
                A[s[i]]++;
        }
        int sum=0, max_odd=0;
        for(auto kv:A){
            if(kv.second%2==0)
                sum+=kv.second;
            else{
                sum+=kv.second-1;
                odd = true;
            }    
        }
        if(odd)
            return sum+1;
        else
            return sum;
    }
};