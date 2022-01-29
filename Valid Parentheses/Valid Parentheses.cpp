// Question Link --> https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    
    
    bool isValid(string s) {
        
        if(s.size() & 1) return false;
        
        stack<char> st;
        
        for(int indx=0;indx<s.size();indx++){
            if(s[indx] == '[' || s[indx] == '{' || s[indx] == '(')
                st.push(s[indx]);
            else{
                char temp=st.top();
                if((st.empty()) || (temp=='[' && s[indx] != ']') || (temp=='(' && s[indx] != ')') || (temp=='{' && s[indx] != '}' ))  return false;
                
                st.pop();
            }
        }
         
        if(st.empty())
            return true;
        else
            return false;
        
        
    }
};
