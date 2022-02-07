    class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            vector<ListNode*> A={head};
            while(A.back()->next != NULL){
                A.push_back(A.back()->next);
            }
            return A[A.size()/2];
        }
    };

把head头指针存入A  
A.back()取A中最后一个元素  
while循环将head中所有元素地址都存入A
