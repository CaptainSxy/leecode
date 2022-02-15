class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        map<char, char> dict;
        dict['('] = ')';
        dict['{'] = '}';
        dict['['] = ']';
        for(char c:s){
            if(c=='(' or c=='{' or c=='[')
                st.push(c);
            else{
                if(st.size()==0)
                    return false;
                char key = st.top();
                st.pop();
                if(c != dict[key])
                    return false;
            }
        }
        if(st.size()>0)
            return false;
        return true;
    }
};