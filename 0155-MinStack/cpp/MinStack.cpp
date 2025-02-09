class MinStack {
private:
    stack<int>s1;
    stack<int>minStack;
public:

void push(int val) {
        s1.push(val);
        val = min(val, minStack.empty()?val:minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        s1.pop();
        minStack.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return minStack.top();
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