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
    ListNode* reverseList(ListNode* head) {
        ListNode* ptr=head;
        ListNode* node=head;
        if(head==nullptr || head->next==nullptr)
            return head;
        head=nullptr;
        do{
            node = node->next;
            ptr->next = head;
            head = ptr;
            ptr = node;
        }while(node!=nullptr);
        return head;
    }
};