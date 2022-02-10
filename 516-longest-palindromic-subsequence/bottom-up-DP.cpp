//QUestion Link --> https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution {
public:
    
    int dp[1005][1005];
    
    int longestPalindromeSubseq(string s) {
        
        int maxLen=1;
        int n=s.size();
        
        if (s == "") return 0;
        
        string s2 = s;
        
        reverse(s.begin(),s.end());
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(s[i-1] == s2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                    maxLen=max(maxLen, dp[i][j]);
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    maxLen=max(maxLen, dp[i][j]);
                }
                
                
            }
        }
        
        return maxLen;
    }
};
