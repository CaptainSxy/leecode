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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;
        int curr_val = head->val;
        int count=1;
        ListNode* ptr = head;
        ListNode* pre_ptr = nullptr;
        while(ptr->next!=nullptr){
            if(ptr->next->val==curr_val){
                count++;
            }
            else{
                if(count>1){
                    if(pre_ptr==nullptr)
                        head = ptr->next;
                    else
                        pre_ptr->next=ptr->next;
                }              
                else
                    pre_ptr=ptr;
                curr_val = ptr->next->val;
                count = 1;
            }
            ptr = ptr->next;
        }
        if(count>1){
            if(pre_ptr!=nullptr)
                pre_ptr->next=nullptr;
            else
                return nullptr;
        }
        return head;
    }
};