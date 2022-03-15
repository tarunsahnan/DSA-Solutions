//OJ --> https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> st;
        
        string res="";
        int open=0, close=0;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i] == '('){
                st.push(i);
                }
            
            else if(s[i] == ')'){
                if(st.empty()){
                    s[i]='*';
                }
                else{
                    st.pop();
                }
            }      
        }
        
        while(!st.empty()){
            int i=st.top(); st.pop();
            s[i]='*';
        }
        
        for(auto& i:s){
            if(i!='*')
                res+=i;
        }
        
        return res;
    }
};