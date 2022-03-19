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
    vector<int> ans;
    void dfs(TreeNode* node, int curr){
        if(node==nullptr)
            return;
        if(node->left==nullptr && node->right==nullptr){
            ans.push_back(curr);
            return;
        }
        dfs(node->left, curr+1);
        dfs(node->right, curr+1);
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)
            return 0;
        dfs(root, 1);
        return *min_element(ans.begin(), ans.end());
    }
};