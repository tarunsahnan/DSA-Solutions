// OJ:https://leetcode.com/problems/simplify-path/

class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        string temp="";
        
        if(path[path.size()-1]!='/') 
            path+="/";
        
        for(int i=1;i<path.size();i++){
            
            if(path[i]=='/'){
                
                
                if(temp=="" || temp==".");
                
                else if(temp==".."){
                    if(st.size())
                        st.pop();
                }
                else
                    st.push(temp);
                
                temp="";
                
            }
            else{
                temp+=path[i];
            }   
        }
        
        
        if(st.empty()) return "/";
        
        string res="";
        
        
        while(st.size()){
            
            res = '/' + st.top() + res;
            st.pop();
        }
        
        return res;
    }
};