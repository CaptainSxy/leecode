class Solution {
public:
    unordered_map<int, string> A{{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
    vector<string> ans;
    string temp;
    void dfs(string digits, int curr){
        if(curr>=digits.size()){
            ans.push_back(temp);
            return;
        }
        int num = digits[curr]-48;
        for(int i=0;i<A[num].size();i++){
            temp.push_back(A[num][i]);
            dfs(digits, curr+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return ans;
        dfs(digits, 0);
        return ans;
    }
};