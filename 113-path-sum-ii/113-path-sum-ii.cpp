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
    vector<int> temp;
    int target;
    void dfs(TreeNode* node, int sum){
        if(node==nullptr)
            return;
        temp.push_back(node->val);
        sum += node->val;
        if(node->left==nullptr && node->right==nullptr && sum==target)
            ans.push_back(temp);
        dfs(node->left, sum);
        dfs(node->right, sum);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        dfs(root, 0);
        return ans;
    }
};