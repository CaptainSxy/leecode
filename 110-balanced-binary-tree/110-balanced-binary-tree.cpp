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
    bool flag = true;
    int dfs(TreeNode* node){
        if(node==nullptr){
            return 1;
        }
        int left = dfs(node->left);
        int right = dfs(node->right);
        if(abs(left-right)>1)
            flag = false;
        return left>right? left+1:right+1;

    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return flag;
    }
};