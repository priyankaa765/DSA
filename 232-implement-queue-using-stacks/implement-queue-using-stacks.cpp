class MyQueue {
    private:
    stack<int> main;
    stack<int> helper;
public:
    MyQueue() {}
    
    void push(int x) {
        // add a ele from main to helper --> main --> helper
        while(main.size() > 0){
            helper.push(main.top());
            main.pop();
        }
        //add xto main 
        main.push(x);

        // add all element helper to main --> helper --> main
        while(helper.size() > 0){
            main.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int TopElement = main.top();
        main.pop();
        return TopElement;
    }
    
    int peek() {
        return main.top();
    }
    
    bool empty() {
        return main.size() == 0;
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