class MyQueue {
    stack<int> ins;
    stack<int> outs;
public:
    MyQueue() {}
    
    void push(int x) {
        ins.push(x);
    }
    
    int pop() {
       if(outs.empty()){
        while(!ins.empty()){
            outs.push(ins.top());
            ins.pop();
        }
       }
       int value = outs.top();
       outs.pop();
       return value;
    }
    
    int peek() {
       if(outs.empty()){
        while(!ins.empty()){
            outs.push(ins.top());
            ins.pop();
        }
       }
       return outs.top();
    }
    
    bool empty() {
        return ins.empty() && outs.empty();
       
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