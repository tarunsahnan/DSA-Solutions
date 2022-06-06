class Solution {
public:
    
    //Bottom Up DP
//     int dp[47];
//     int climbStairs(int n) {
        
//         dp[0]=1;
//         dp[1]=2;
            
//         for(int i=2;i<n;i++)
//             dp[i] = dp[i-1] + dp[i-2];    
//         return dp[n-1];
//     }
    
    
    //Top Bottom DP
    int dp[47];
        
    int climbStairs(int n){
        
        if(n==0 || n==1)
            return 1;
        
        if(dp[n] != 0) return dp[n];
        
        dp[n]= climbStairs(n-1) + climbStairs(n-2);
        
        return dp[n];
        
    }
};