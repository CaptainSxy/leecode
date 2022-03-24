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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k<=1)
            return head;
        vector<ListNode*> vec;
        ListNode* node = head;
        ListNode* pre = head;
        while(node){
            if(vec.size()==k){
                int i = k-1;
                if(pre==head) head = vec[i];
                else pre->next = vec[i];
                pre = vec[0];
                vec[0]->next = vec[i]->next;
                while(i){
                    vec[i]->next = vec[i-1];
                    i--;
                }
                vec.clear();
            }
            vec.emplace_back(node);
            node = node->next;
        }

        if(vec.size()==k){
            int i = k-1;
            if(pre==head) head = vec[i];
            else pre->next = vec[i];
            pre = vec[0];
            vec[0]->next = vec[i]->next;
            while(i){
                vec[i]->next = vec[i-1];
                i--;
            }
        }

        return head;
    }
};