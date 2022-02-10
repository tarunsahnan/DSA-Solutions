//Question Link --> https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    
    //LCS
    int dp[105][10005];
    bool isSubsequence(string s, string t) {
        
        
         if ( s == t) return true;
        
        int n1=s.size(),n2=t.size(),palin_count=0;
        
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                
                if(s[i-1] == t[j-1]){
                    dp[i][j] =  1 + dp[i-1][j-1];
                    palin_count = max(palin_count, dp[i][j]);
                }
                else{
                    dp[i][j] =max(dp[i-1][j], dp[i][j-1]);
                    palin_count = max(palin_count, dp[i][j]);
                }
            }
        }
        
        cout<<palin_count<<n2;
        
        return palin_count == n1? true:false;
        
    }
};
