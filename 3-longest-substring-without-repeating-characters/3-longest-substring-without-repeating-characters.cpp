class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> A;
        int left=0, right=0, maxSubLen=0, len=s.size();
        for(int i=0; i<len; i++){
            if(i!=0){
                A.erase(s[left]);
                left++;
            }
            while((right<len) && (!A.count(s[right]))){
                A.insert(s[right]);
                right++;
            }
            maxSubLen=max(maxSubLen, int(A.size()));
        };
        return maxSubLen;
    }
};