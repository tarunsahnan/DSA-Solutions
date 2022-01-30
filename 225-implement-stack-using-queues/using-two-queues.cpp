//Question Link --> https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        
        if(q1.empty()) q1.push(x);
        else{
            
            while(!q1.empty())   {           
                int temp=q1.front();
                q2.push(temp);
                q1.pop();
            }
    
            q1.push(x);
            while(!q2.empty()){
                int temp=q2.front();
                q1.push(temp);
                q2.pop();
            }             
                
        }
        
    }
    
    int pop() {
        int temp=q1.front();
        q1.pop();
        return temp;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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
