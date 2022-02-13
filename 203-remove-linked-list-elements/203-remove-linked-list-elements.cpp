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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)
            return head;
        while(head->val == val){
            head = head->next;
            if(head==nullptr)
                return head;
        }
        ListNode* ptr=head;
        ListNode* pre_node;
        while(ptr!=nullptr){
            if(ptr->val == val){
                pre_node->next = ptr->next;
            }
            else{
                pre_node = ptr; 
            }           
            ptr=ptr->next;
        }
        return head;
    }
};