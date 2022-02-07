/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> A={head};
        while(A.back()->next != NULL)
            A.push_back(A.back()->next);
        A.push_back(NULL);
        int len = A.size();
        if(len-1-n>0)
            A[len-1-n-1]->next=A[len-n];
        else
            A.erase(A.begin());
        return A[0];
    }
};