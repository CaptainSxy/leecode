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
    vector<int> A_left, A_right;
    void dfs_left(TreeNode* node){
        if(node!=nullptr){
            dfs_left(node->left);
            dfs_left(node->right);
            A_left.push_back(node->val);
        }
        else
            A_left.push_back(-1);
    }
    void dfs_right(TreeNode* node){
        if(node!=nullptr){
            dfs_right(node->right);
            dfs_right(node->left);
            A_right.push_back(node->val);
        }
        else
            A_right.push_back(-1);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)
            return true;
        dfs_left(root->left);
        dfs_right(root->right);
        if(A_left.size()!=A_right.size())
            return false;
        for(int i=0;i<A_left.size();i++){
            if(A_left[i]!=A_right[i])
                return false;
        }
        return true;
    }
};