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
    bool dfs(TreeNode* p, TreeNode* q){
        if(p==nullptr){
            if(q==nullptr)
                return true;
            else 
                return false;
        }
        if(q==nullptr){
            return false;
        }
        if(p->val!=q->val)
            return false;
        return dfs(p->left, q->left) && dfs(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return dfs(p, q);
    }
};