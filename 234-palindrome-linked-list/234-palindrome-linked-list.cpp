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
    bool isPalindrome(ListNode* head) {
        vector<int> result;
        while(head){
            result.push_back(head->val);
            head = head->next;
        }
        int left = 0, right = result.size()-1;
        while(left<right){
            if(result[left]==result[right]){
                left++;
                right--;
            }
            else
                return false;
        }
        return true;
    }
};