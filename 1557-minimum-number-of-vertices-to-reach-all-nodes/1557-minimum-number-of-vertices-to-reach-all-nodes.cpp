class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(i);
        }
        for(auto kv:edges){
            int k = kv[0], v = kv[1];
            if(st.find(v)!=st.end())
                st.erase(v);
        }
        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};