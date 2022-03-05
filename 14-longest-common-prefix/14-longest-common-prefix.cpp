class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
            return strs[0];
        string presuffix=strs[0];
        int i,j;
        for(i=1;i<strs.size();i++){
            string str = strs[i];
            for(j=0;j<presuffix.size();j++){
                if(presuffix[j]!=str[j])
                    break;
            }
            presuffix = presuffix.substr(0, j);
        }
        return presuffix;
    }
};