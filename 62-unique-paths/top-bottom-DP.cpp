//Question Link --> https://leetcode.com/problems/unique-paths/

 int dp[101][101];
    
    int rec(int m, int n)
    {
        
        if(m==0 || n==0)
            return 1;
        
        if(dp[m][n] != 0) return dp[m][n];
        
        int ans=rec(m-1,n) + rec(m,n-1);
        dp[m][n] =ans;
        return ans;
        
    }
    
    
    int uniquePaths(int m, int n) {        
    return rec(m-1,n-1);
}
