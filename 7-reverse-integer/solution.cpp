//Question Link --> https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        
        
        try{
            bool sign=false;
            
            if(x<0){
                sign=true;
                x=abs(x);
            }
            int rev=0;
            
            while(x>0){
                
                if(rev > (INT_MAX /10)) return 0;
                
                rev=(rev*10)+(x%10);
                x=x/10;
        
            }
            if(sign) rev=0-rev;
            return rev;
        }
        catch(...){
            return 0;
        }
    }
};