//Question Link --> https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
public:
    string longestPalindrome(string s) {
        
        int maxLen=0;
        string res="";
        int n=s.size();
        vector<vector<int>> dp (n+2,vector<int>(n+2,0));
        
        for(int i=0;i<n;i++){
            dp[i][i] = 1;
            
            if(maxLen < dp[i][i]){
                maxLen=dp[i][i];
                res=s.substr(i,1);
            }    
        }
        
        for( int window=2; window<=n;window++){
            
            for(int i=0;i<n-window+1;i++){
                
                int j=i+window-1;
                
            //for window=2
                if(window == 2 and s[i] == s[j]){
                    dp[i][j] = 2;
                    if(maxLen < dp[i][j]){
                        maxLen=dp[i][j];
                        res=s.substr(i,2);
                      }
                }
                else if (s[i] == s[j] and dp[i+1][j-1] > 0){
                    dp[i][j] = window;
                    if(maxLen < dp[i][j]){
                            maxLen=dp[i][j];
                            res=s.substr(i,window);
                       }  
                }
                else dp[i][j]=0;
            }        
        }
        
        return res;
    
        
        
    }
};
