class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> A{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int i=0;
        int sum = 0;
        while(i<s.size()-1){
            // cout<<"pre="<<sum<<endl;
            if(A[s[i+1]]>A[s[i]])
                sum -= A[s[i]];
            else
                sum+= A[s[i]];
            i++;
            // cout<<"after="<<sum<<endl;
        }
        sum+=A[s[s.size()-1]];
        return sum;
    }
};