/Question Link --> https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int dp[35];
    
    int fib(int n) {
        if(n==0 || n==1)
            return n;
        
        dp[1] = 1; dp[2] = 1;
        
        for(int i=3;i<=n;i++)
            dp[i] = dp[i-1] + dp[i-2];
        
        return dp[n];
    }
};
