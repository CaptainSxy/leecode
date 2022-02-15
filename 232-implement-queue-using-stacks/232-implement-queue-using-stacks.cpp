class MyQueue {
public:
    stack<int> s1, s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        transfer(s1, s2);
        int val = s2.top();
        s2.pop();
        transfer(s2, s1);
        return val;
    }
    
    int peek() {
        transfer(s1, s2);
        int val = s2.top();
        transfer(s2, s1);
        return val;
    }

    void transfer(stack<int>& s1, stack<int>& s2){
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();
        }
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */