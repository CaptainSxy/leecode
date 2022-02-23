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
    void handle(Node* &last, Node* &p, Node* &nextStart){
        if(last)
            last->next = p;
        if(!nextStart)
            nextStart = p;
        last = p;
    }
    Node* connect(Node* root) {
        if(root==nullptr)
            return root;
        Node* Start = root;
        while(Start){
            Node* last = nullptr, *nextStart = nullptr;
            Node* ptr = Start;
            while(ptr){
                if(ptr->left)
                    handle(last, ptr->left, nextStart);
                if(ptr->right)
                    handle(last, ptr->right, nextStart);
                ptr = ptr->next;
            }
            Start = nextStart;
        }
        return root;
    }
};