//Question Link --> https://leetcode.com/problems/maximal-square/

class Solution {
public:
    int dp[300][300];
    
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int res=0; 
        
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0] =='1') res=1;
            dp[i][0] = matrix[i][0]-'0';
        }
        for(int i=0;i<matrix[0].size();i++){
            if(matrix[0][i] =='1') res=1;
            dp[0][i] = matrix[0][i]-'0';
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                
                if(matrix[i][j] == '1'){
                    dp[i][j] = 1 + min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]});
                    res= max({res,dp[i][j]});
                }
                else
                    dp[i][j] =0;
                
            }
        }
        
        
        return res*res;
    }
};
