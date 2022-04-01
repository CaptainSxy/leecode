class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>> vec;
        for(auto& kv:mp){
            vec.push_back(kv);
        }
        sort(vec.begin(),vec.end(),[](const pair<char,int> &a, const pair<char,int> &b){
            return a.second > b.second;
        });
        string ans;
        for(auto& kv:vec){
            for(int i=0;i<kv.second;i++){
                ans.push_back(kv.first);
            }
        }
        return ans;
    }
};

//答案