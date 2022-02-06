//Question Link --> https://leetcode.com/problems/climbing-stairs/

    int dp[47];
        
    int climbStairs(int n){
        
        if(n==0 || n==1)
            return 1;
        
        if(dp[n] != 0) return dp[n];
        
        dp[n]= climbStairs(n-1) + climbStairs(n-2);
        
        return dp[n];
        
    }
