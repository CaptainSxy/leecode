class MyLinkedList {
public:
    struct ListNode{
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    }; 
    ListNode *head = nullptr;
    MyLinkedList() {

    }
    
    int get(int index) {
        if(index<0 || head==nullptr) 
            return -1;
        ListNode* ptr = head;
        while(index){
            ptr = ptr->next;
            index--;
            if(!ptr) return -1;
        }
        return ptr->val;
    }
    
    void addAtHead(int val) {
        ListNode *node = new ListNode(val);
        node->next = head;
        head = node;
    }
    
    void addAtTail(int val) {
        if(head==nullptr){
            head = new ListNode(val);
            return;
        }
        ListNode* ptr=head;
        while(ptr->next){
            ptr = ptr->next;
        }
        ptr->next = new ListNode(val);
    }
    
    void addAtIndex(int index, int val) {
        if(index<=0){
            addAtHead(val);
            return;
        }
            
        ListNode* ptr = head;
        while(index-1){
            if(ptr->next==nullptr) return;
            ptr = ptr->next;
            index--;
        }
        if(!ptr) return;
        if(!ptr->next){
            addAtTail(val);
            return;
        }
        ListNode *temp = ptr->next;
        ptr->next = new ListNode(val);
        ptr->next->next = temp;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || head==nullptr) return;
        if(index==0){
            head = head->next;
            return;
        }
        ListNode* ptr = head;
        // while(ptr){
        //     cout<<ptr->val<<endl;
        //     ptr = ptr->next;
        // }

        while(index-1){
            if(!ptr->next) return;
            ptr = ptr->next;
            index--;
        }
        if(!ptr->next) return;
        ptr->next = ptr->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */