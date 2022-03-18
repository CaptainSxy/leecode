class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, vector<int>> mp;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(mp.find(c)==mp.end()){
                mp[c]={i};
            }
            else{
                mp[c].push_back(i);
            }
        }
        unordered_set<char> st;
        st.insert(s[0]);
        int start,end;
        int left=0, right=mp[s[0]].back();
        // cout<<left<<" "<<right<<endl;
        for(int i=1;i<s.size();i++){
            char c = s[i];
            if(st.find(c)!=st.end())
                continue;
            start = mp[c][0];
            end = mp[c].back();
            // cout<<start<<" "<<end<<",  ";
            if(start>right){
                ans.push_back(right-left+1);
                left = start;
                right = end;
            }
            else if(end<right){
                st.insert(c);
            }
            else{
                right = end;
            }
            if(right==s.size()-1){
                ans.push_back(right-left+1);
                break;
            }
        }
        return ans;
    }
};