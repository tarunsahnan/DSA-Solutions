class Solution {
public:

    //top bottom dp
//     int dp[501][501];
//     int helper(string s1, string s2, int n1,int n2){

//         if(n1 ==0) return dp[n1][n2]=n2;
//         if(n2 == 0) return dp[n1][n2]=n1;
//         if(dp[n1][n2])
//             return dp[n1][n2];
//         if(s1[n1-1] == s2[n2-1]){
//             return helper(s1,s2,n1-1,n2-1);
//         }
        
//         //insert delete replace
//         return dp[n1][n2] = 1+ min({helper(s1,s2,n1,n2-1),helper(s1,s2,n1-1,n2),helper(s1,s2,n1-1,n2-1)});
        
//     }
    
    int minDistance(string s1, string s2) {
        
        // return helper(word1,word2,word1.size(),word2.size());
        
        int n1=s1.size(),n2=s2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        
        for(int i=0;i<=n2;i++)
            dp[0][i]=i;
        
        for(int i=0;i<=n1;i++)
            dp[i][0]=i;
            
        
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
                
            }
        }
        return dp[n1][n2];
    }
};