/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> vec;
    void dfs(TreeNode* node, int curr){
        if(node==nullptr)
            return;
        if(vec.size()<curr+1)
            vec.push_back({node->val});
        else
            vec[curr].push_back(node->val);
        dfs(node->right, curr+1);
        dfs(node->left, curr+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        dfs(root, 0);
        for(int i=0;i<vec.size();i++){
            ans.push_back(vec[i][0]);
        }
        return ans;
    }
};