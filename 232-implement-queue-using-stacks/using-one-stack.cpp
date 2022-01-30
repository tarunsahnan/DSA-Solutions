//Question Link --> https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
    stack<int> st1;
    MyQueue() {
        
    }
    
    void push_at_bottom(int x){
        
        if(st1.empty()) {
            st1.push(x);
            return;
        }
        
        int temp=st1.top();
        st1.pop();
        
        push_at_bottom(x);
        
        st1.push(temp);
        
        
    }
    
    void push(int x) {
        
        push_at_bottom(x);
        
    }
    
    
    int pop() {
        int temp=st1.top();
        st1.pop();
        return temp;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
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
