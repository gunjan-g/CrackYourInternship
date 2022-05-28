class MyQueue {
stack<int> s1, s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int x; 
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        x= s1.top();
        s1.pop();
        while(s2.size()>0){
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    int peek() {
       int x;
        while(s1.size()>1){
            s2.push(s1.top());
            s1.pop();
        }
        x=s1.top();
        s2.push(x);
        s1.pop();
        while(s2.size()>0){
            s1.push(s2.top());
            s2.pop();
        }
        return x; 
    }
    
    bool empty() {
        if(s1.empty()) return true;
        else return false;
    }
};
