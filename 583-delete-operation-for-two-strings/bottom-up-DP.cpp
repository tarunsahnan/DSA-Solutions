//Question Link --> https://leetcode.com/problems/delete-operation-for-two-strings/

class Solution {
public:
    
    
    //Least Common Subseqeunce
    int dp[505][505];
    int minDistance(string word1, string word2) {
        if(word1 == word2) return 0;
        
        int n1=word1.size(),n2=word2.size();
        
        int count=0;
        
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                
                if(word1[i-1] == word2[j-1]){
                    dp[i][j] = 1+ dp[i-1][j-1];
                    count = max(count,dp[i][j]);
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                    count = max(count,dp[i][j]);
                }
                
            }
        }
        
        // string len we want to create  = count
        // We have to make each string of length count.
        // Remove (n1-count) elements from str1 and (n2-count) elements from str2 and add them.
        return (n1 - count) + (n2 - count); 
        
    }
};
