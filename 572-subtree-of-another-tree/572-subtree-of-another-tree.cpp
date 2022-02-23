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
    bool check(TreeNode* node, TreeNode* subRoot){
        if(!node && !subRoot)
            return true;
        if((node && !subRoot)||(!node && subRoot)||(node->val!=subRoot->val))
            return false;
        return check(node->left, subRoot->left) && check(node->right, subRoot->right);
    }
    bool dfs(TreeNode* node, TreeNode* subRoot){
        if(!node)
            return false;
        return check(node, subRoot) || dfs(node->left, subRoot) || dfs(node->right, subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {        
        return dfs(root, subRoot);
    }
};