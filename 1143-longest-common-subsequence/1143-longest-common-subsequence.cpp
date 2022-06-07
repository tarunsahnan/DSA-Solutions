class Solution {
public:
    
    int dp[1005][1005];
    int longestCommonSubsequence(string text1, string text2) {
        
        int n1= text1.size(),n2=text2.size();
        
        if(n1==0 or n2==0) return 0;
        
        int maxLen=0;
        
        for(int i=1;i<=n1;i++){
            
            for(int j=1;j<=n2;j++){
                
                if(text1[i-1] == text2[j-1])
                    dp[i][j]= 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                
                maxLen = max(maxLen,dp[i][j]);

                
            }
        }
        
        return maxLen;
        
    }
};