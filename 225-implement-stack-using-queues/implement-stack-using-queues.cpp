class MyStack {
    private:
    queue<int> main;
    queue<int>helper;

public:
    MyStack() {}
    
    void push(int x) {
    //moving ele from main to helper
    while(main.size() > 0){
        helper.push(main.front());
        main.pop();
    }

    //add X in main queue
    main.push(x);

    //moving all ele from helper to main  
    while(helper.size() > 0){
        main.push(helper.front());
        helper.pop();
    }  
    }
    
    int pop() {
        // Capture the top ele value before deleting it
        int topElement = main.front();
        main.pop();
        return topElement; //evelution platform you to return this
    }
    
    int top() {
        return main.front();
    }
    
    bool empty() {
        return main.empty();
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