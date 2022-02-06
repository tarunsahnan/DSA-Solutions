//Question Link --> https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    
    int dp[47];
    int climbStairs(int n) {
        
        dp[0]=1;
        dp[1]=2;
            
        for(int i=2;i<n;i++)
            dp[i] = dp[i-1] + dp[i-2];    
        return dp[n-1];
    }
};
