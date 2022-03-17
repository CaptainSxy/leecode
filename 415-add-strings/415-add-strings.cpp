class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int add = 0;
        char c1,c2,c;
        while(num1.size()>0 || num2.size()>0){
            if(num1.size()==0){
                c2 = num2.back();
                c = c2 + add - 48;
                num2.pop_back();
            }
            else if(num2.size()==0){
                c1 = num1.back();
                c = c1 + add - 48;
                num1.pop_back();
            }
            else{
                c1 = num1.back(), c2 = num2.back();
                c = c1 + c2 + add - 96;
                num1.pop_back();
                num2.pop_back();
            }
            add = c/10;
            c = c%10 +48;
            ans.insert(ans.begin(), c);
        }
        if(add>0)
            ans.insert(ans.begin(), add+48);
        return ans;
    }
};