class Solution {
public:

    int dp[501][501];
    int helper(string s1, string s2, int n1,int n2){

        if(n1 ==0) return dp[n1][n2]=n2;
        if(n2 == 0) return dp[n1][n2]=n1;
        if(dp[n1][n2])
            return dp[n1][n2];
        if(s1[n1-1] == s2[n2-1]){
            return helper(s1,s2,n1-1,n2-1);
        }
        
        //insert delete replace
        return dp[n1][n2] = 1+ min({helper(s1,s2,n1,n2-1),helper(s1,s2,n1-1,n2),helper(s1,s2,n1-1,n2-1)});
        
    }
    
    int minDistance(string word1, string word2) {
        
        return helper(word1,word2,word1.size(),word2.size());
        
        
    }
};