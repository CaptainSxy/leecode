class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> ans;
        string temp;
        int count = 0;
        for(char c:s){
            if(c==' '){
                ans.push_back(temp);
                temp.clear();
                count++;
            }
            else{
                temp.push_back(c);
            }
            if(count==k)
                break;
        }
        if(temp.size()>0)
            ans.push_back(temp);
        for(int i=1;i<ans.size();i++){
            ans[0].append(" ");
            ans[0].append(ans[i]);
        }
        return ans[0];
    }
};