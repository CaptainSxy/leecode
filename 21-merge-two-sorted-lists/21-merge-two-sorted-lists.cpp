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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* node=nullptr;
        ListNode* L1=nullptr;
        ListNode* L2=nullptr;
        if(list1==nullptr)
            return list2;
        else if(list2==nullptr)
            return list1;
        else{
            if(list1->val > list2->val){
                L1 = list2;
                L2 = list1;
            }
            else{
                L1 = list1;
                L2 = list2;
            }
        }
        ListNode* ptr = L1;
        while(ptr->next!=nullptr){
            if(L2!=nullptr){
                if(ptr->next->val <= L2->val){
                    ptr = ptr->next;
                    continue;
                }
                node = ptr->next;
                ptr->next = L2;
                L2 = L2->next;
                ptr->next->next=node; 
            }
            ptr=ptr->next;
        }
        if(L2!=nullptr){
            ptr->next=L2;
        }
        return L1;
    }
};