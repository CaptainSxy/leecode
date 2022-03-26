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
    vector<vector<int>> ans;
    void dfs(TreeNode* node, int curr){
        if(node==nullptr)
            return;
        if(ans.size()<curr+1){
            ans.push_back({node->val});
        }
        else{
            ans[curr].push_back(node->val);
        }
        dfs(node->left, curr+1);
        dfs(node->right, curr+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        dfs(root, 0);
        for(int i=0;i<ans.size();i++){
            if(i%2){
                reverse(ans[i].begin(), ans[i].end());
            }
        }
        return ans;
    }
};