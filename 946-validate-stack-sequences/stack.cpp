//OJ --> https://leetcode.com/problems/validate-stack-sequences/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int pushIndex=0,popIndex=0;
        
        while(pushIndex <pushed.size() and popIndex<popped.size()){
            
            if(st.empty())
                st.push(pushed[pushIndex++]);
            else if(st.top() == popped[popIndex]){
                st.pop();popIndex++;
            }
            else{
                st.push(pushed[pushIndex++]);
            }
        }
        
        
        
        if(st.empty()) return true;
        
        while(popIndex < popped.size()){
            if(st.top() != popped[popIndex])
                return false;
            st.pop();
            popIndex++;
        }
        
        return true;
        
    }
};