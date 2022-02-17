class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int ind=-1, count = 0;
        if(s1.size()!=s2.size())
            return false;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count>2)
                    return false;
                if(ind==-1){
                    ind = i;
                }
                else{
                    if(s1[ind]!=s2[i] || s2[ind]!=s1[i])
                        return false;
                }
            }
        }
        if(count == 1)
            return false;
        return true;
    }
};