class MyStack {
    queue<int> q1, q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int x;
         while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        x=q1.front();
        q1.pop();
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    int top() {
        int x;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        x=q1.front();
        q2.push(q1.front());
        q1.pop();
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
    
    bool empty() {
        if(q1.empty()) return true;
        else return false;
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
