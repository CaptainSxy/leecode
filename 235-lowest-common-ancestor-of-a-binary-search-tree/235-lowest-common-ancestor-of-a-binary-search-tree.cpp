/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    void dfs(TreeNode* node, TreeNode* p, TreeNode* q){
        if(node==nullptr)
            return;
        ans=node;
        if(node->val>p->val && node->val>q->val){
            dfs(node->left, p, q);
        }
        else if(node->val<p->val && node->val<q->val){
            dfs(node->right, p, q);
        }
        else{
            if(p==ans){
                ans=p;
                return;
            }
            if(q==ans){
                ans=q;
                return;
            }
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, p, q);
        return ans;
    }
};