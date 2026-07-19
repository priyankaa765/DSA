class MinStack {
private :
    stack<int> st;
    stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty() || min.top() >= value){
            min.push(value);
        }
        st.push(value);
    }
    
    void pop() {
        int ele1 = st.top();
        st.pop();
        int ele2 = min.top();

        if(ele1 == ele2){
            min.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */