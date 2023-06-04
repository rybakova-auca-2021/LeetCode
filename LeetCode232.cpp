class MyQueue {
public:
    stack<int> s, s1;
    MyQueue() {
    }
    
    void push(int x) {
         while (!s.empty()) {
            s1.push(s.top());
            s.pop();
        }
        
        s.push(x);
        
        while (!s1.empty()) {
            s.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int store = s.top();
        s1.pop();
        return store;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
    }
};