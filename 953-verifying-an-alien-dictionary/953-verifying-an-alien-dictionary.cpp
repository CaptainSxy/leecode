class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                int len = min(words[i].size(), words[j].size());
                int k=0;
                for(k=0;k<len;k++){
                    int ind1 = find(order.begin(), order.end(), words[i][k])-order.begin();
                    int ind2 = find(order.begin(), order.end(), words[j][k])-order.begin();
                    if(ind1>ind2)
                        return false;
                    else if(ind1<ind2)
                        break;
                }
                if(words[i].size()>words[j].size() && k>=len)
                    return false;
            }
        }
        return true;
    }
};