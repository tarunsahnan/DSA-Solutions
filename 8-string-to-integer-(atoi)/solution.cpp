//Question Link -->   https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        
        while(s[0] == ' ')
            s.erase(0,1);
        
        if(s.size() == 0) return 0;
        
        bool neg=false;
        if(s[0] == '-' || s[0]=='+'){
            if(s[0] == '-') neg=true;
            s.erase(0,1);
        }
    
        if(s.size() == 0) return 0;
        
        int num=0;
        int i=0;
        
        while(i<s.size() and isdigit(s[i])){
            
            if(num > INT_MAX/10 || ((num == (INT_MAX/10) and (s[i] - '0')>(INT_MAX%10)))) return neg?INT_MIN:INT_MAX;
            
            num=(num*10)+(s[i++]-'0');
            
    
            
        }
        if(neg == true) num=0-num;
        
        return num;
        
    }
};