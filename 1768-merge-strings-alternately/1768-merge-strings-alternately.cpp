class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.size(), word2.size());
        string word;
        int i=0;
        for(i=0;i<n;i++){
            word.push_back(word1[i]);
            word.push_back(word2[i]);
        }
        if(n<word1.size()){
            word+= word1.substr(i, word1.size()-i);
        }
        else if(n<word2.size())
            word+= word2.substr(i, word2.size()-i);
        return word;
    }
};