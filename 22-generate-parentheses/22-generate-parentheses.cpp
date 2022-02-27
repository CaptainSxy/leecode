class Solution {
public:
    vector<string> ans;
    string temp;
    void dfs(int left, int right){
        if(left==0 && right==0){
            ans.push_back(temp);
            return;
        }
        if(left == right){
            temp.push_back('(');
            left--;
            dfs(left, right);
            temp.pop_back();
        }
        else if(left<right){
            if(left>0){
                left--;
                temp.push_back('(');
                dfs(left, right);
                temp.pop_back();
                left++;
            }
            right--;         
            temp.push_back(')');
            dfs(left, right);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        dfs(n, n);
        return ans;
    }
};

//根据后面的题解  左括号数要等于右括号数  如果左等于右 下一个只能右  如果左小于右则下一个可左可右