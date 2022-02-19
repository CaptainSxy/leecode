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
    void dfs(TreeNode** root, TreeNode* node, int val){
        if(node==nullptr)
            return;
        if(node->val==val)
            *root = node;
        else{
            dfs(root, node->left, val);
            dfs(root, node->right, val);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        dfs(&root, root, val);
        if(root->val==val)
            return root;
        else    
            return nullptr;
    }
};