//Question Link --> https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

class Solution {
public:
    
    //Least Common Subsequence 
    
    int dp[505][505];
    int minInsertions(string s) {

        string s2=s;
        reverse(s.begin(),s.end());
        
        if ( s == s2) return 0;
        
        int n=s.size(),palin_count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(s2[i-1] == s[j-1]){
                    dp[i][j] =  1 + dp[i-1][j-1];
                    palin_count = max(palin_count, dp[i][j]);
                }
                else{
                    dp[i][j] =max(dp[i-1][j], dp[i][j-1]);
                    palin_count = max(palin_count, dp[i][j]);
                }
            }
        }
        
        // if palin_count is the length of longest palindromic subsequence in s
        // it means there are (n - palin_count) elements that need some elements to make whole str as palindrome
        return (n - palin_count);
        
    }
};
