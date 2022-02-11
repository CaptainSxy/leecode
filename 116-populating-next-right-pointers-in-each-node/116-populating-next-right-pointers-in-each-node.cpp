/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void sub_connect(Node* node) {
        if(node->left!=nullptr){
            while(node!= nullptr){
                node->left->next=node->right;     
                if(node->next!=nullptr)
                    node->right->next=node->next->left;
                else
                    node->right->next=nullptr;
                node=node->next;        
            }
        }
    }
    Node* connect(Node* root) {
        if(root==nullptr or root->left==nullptr)
            return root;
        root->next=nullptr;
        root->left->next = root->right;
        root->right=nullptr;
        Node* node = root;
        while(node->left!=nullptr){
            sub_connect(node->left);
            node = node->left;
        }
        return root;
    }
};