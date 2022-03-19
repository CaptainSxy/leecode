class MinStack {
public:
    vector<int> s;
    MinStack() {

    }
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        s.erase(s.end()-1);
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return *min_element(s.begin(), s.end());
    }
};
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */