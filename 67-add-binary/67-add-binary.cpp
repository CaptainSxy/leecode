class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int n = max(a.size(), b.size()) - min(a.size(), b.size());
        int add = 0;
        while(a.size()<b.size()){
            a.insert(a.begin(), '0');
        }
        while(b.size()<a.size()){
            b.insert(b.begin(), '0');
        }
        // return b;
        for(int i=a.size();i>=0;i--){
            int sum = a[i] + b[i] - 96 + add;
            if(sum==3){
                add = 1;
                ans.insert(ans.begin(), '1');
            }
            else if(sum==2){
                add = 1;
                ans.insert(ans.begin(),'0');
            }
            else if(sum==1){
                add = 0;
                ans.insert(ans.begin(),'1');
            }
            else if(sum==0){
                add = 0;
                ans.insert(ans.begin(),'0');
            }
        }
        if(add==1)
            ans.insert(ans.begin(),'1');

        return ans;
    }
};