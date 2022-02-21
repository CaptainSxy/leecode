class Solution {
public:
    string interpret(string command) {
        string ans;
        string temp;
        for(char c:command){
            if(c=='G')
                ans.push_back('G');
            else if(c=='('){
                temp.clear();
                temp.push_back('(');
            }
            else if(c==')'){
                if(temp=="(")
                    ans.push_back('o');
                if(temp=="(al"){
                    ans.push_back('a');
                    ans.push_back('l');
                }
            }
            else 
                temp.push_back(c);
        }
        return ans;
    }
};