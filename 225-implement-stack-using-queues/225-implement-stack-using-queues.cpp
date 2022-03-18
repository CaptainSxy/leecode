class MyStack {
public:
    queue<int> q_in;
    MyStack() {

    }
    
    void push(int x) {
        q_in.push(x);
    }
    
    int pop() {
        int num = -1;
        queue<int> q_out;
        while(q_in.size()>1){
            q_out.push(q_in.front());
            q_in.pop();
        }
        num = q_in.front();
        q_in = q_out;
        return num;
    }
    
    int top() {
        int num = -1;
        queue<int> q_out;
        while(q_in.size()>0){
            num = q_in.front();
            q_out.push(num);
            q_in.pop();
        }
        q_in = q_out;
        return num;
    }
    
    bool empty() {
        return q_in.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */