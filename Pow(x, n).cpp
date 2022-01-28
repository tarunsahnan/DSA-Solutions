//Question Link --> https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
        
        if(n<0){
            x=1/x;
            n=abs(n);
        }
        
        if(n==0)
            return 1;
        
        if(n%2 == 0){
            double result=myPow(x,n/2);
            return result * result;
            }
        else      
            return x*myPow(x,n-1);   
    }
};
