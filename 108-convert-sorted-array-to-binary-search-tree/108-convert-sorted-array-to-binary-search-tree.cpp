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
    void dfs(TreeNode* &node, vector<int>& nums, int left, int right){
        if(left>right)
            return;
        int mid = (left+right)/2;
        node = new TreeNode(nums[mid]);
        dfs(node->left, nums, left, mid-1);
        dfs(node->right, nums, mid+1, right);
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid = nums.size()/2;
        TreeNode* root = new TreeNode(nums[mid]);
        dfs(root, nums, 0, nums.size()-1);
        return root;
    }
};