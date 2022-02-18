/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> A;
    void dfs(Node* node){
        if(node==nullptr)
            return;
        A.push_back(node->val);
        for(Node* node_child:node->children){
            dfs(node_child);
        }
    }
    vector<int> preorder(Node* root) {
        dfs(root);
        return A;
    }
};