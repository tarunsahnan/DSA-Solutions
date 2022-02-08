//Question Link --> https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    
    int tribonacci(int n) {
        
        if(n <= 1) return n;
        if(n==2) return 1;
        
        return  tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};
