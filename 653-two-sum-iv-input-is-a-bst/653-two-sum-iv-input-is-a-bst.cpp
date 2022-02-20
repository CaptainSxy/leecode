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
    void dfs(TreeNode* node){
        if(node==nullptr)
            return;
        ans.push_back(node->val);
        dfs(node->left);
        dfs(node->right);
    }
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
        sort(ans.begin(), ans.end());
        int low=0,high=ans.size()-1;
        while(low<high){
            int res = ans[low]+ans[high];
            if(res==k)
                return true;
            else if(res>k)
                high--;
            else
                low++;
        }
        return false;
    }
};