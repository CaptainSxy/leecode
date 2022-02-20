class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1,s2;
        for(char c:s){
            if(c=='#'){
                if(s1.size()>0)
                    s1.pop();
            }
            else{
                s1.push(c);
            }
        }
        for(char c:t){
            if(c=='#'){
                if(s2.size()>0)
                    s2.pop();
            }
            else{
                s2.push(c);
            }
        }
        if(s1.size()!=s2.size())
            return false;
        while(!s1.empty()){
            char c1 = s1.top();
            char c2 = s2.top();
            if(c1!=c2)
                return false;
            s1.pop();
            s2.pop();
        }
        
        return true;
    }
};