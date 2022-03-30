class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_set<int> st;
        unordered_map<int, int> mp;
        for(int i=1;i<=n;i++)
            mp[i] = 0;
        for(auto kv:trust){
            int key = kv[1], val = kv[0]; //key是被信任的
            st.insert(val);
            mp[key]++;
        }
        for(auto kv:mp)
            if(kv.second==n-1 && st.find(kv.first)==st.end())
                return kv.first;
        return -1;
    }
};