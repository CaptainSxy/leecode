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
    vector<vector<int>> A;
    vector<int> temp;
    void dfs(TreeNode* node, int depth){
        if(node!=nullptr){
            if(A.size()<depth){
                vector<int> temp{node->val};
                A.push_back(temp);
            }
            else{
                A[depth-1].push_back(node->val);
            }
            dfs(node->left, depth+1);
            dfs(node->right, depth+1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        dfs(root, 1);
        return A;
    }
};