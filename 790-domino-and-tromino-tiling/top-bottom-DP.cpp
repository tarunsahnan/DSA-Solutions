//Question Link --> https://leetcode.com/problems/domino-and-tromino-tiling/

class Solution {
public:
    
    const int N = 1e9 +7;
    int dp[1001][1001];
    int rec(int row1, int row2){
        
        if(row1 ==0 and row2==0)
            return 1;
        
        if(row1<0 or row2<0)
            return 0;
        
        if(dp[row1][row2] != 0)
            return dp[row1][row2] % N;
        
        int ans=0;
        
        if(row1 == row2){
            ans= ((ans%N) + (rec(row1-2,row2-2)) %N)%N;
            ans= ((ans%N) + (rec(row1-1,row2-1)) %N)%N;
            ans= ((ans%N) + (rec(row1-2,row2-1)) %N)%N;
            ans= ((ans%N) + (rec(row1-1,row2-2)) %N)%N;    
        }
        
        if(row1 > row2){
            
            ans = ((ans%N) + (rec(row1 -2,row2)) %N)%N;
            ans = ((ans%N) + (rec(row1-2,row2-1)) %N)%N;
            
        }
        
        if(row1 < row2){
            
            ans = ((ans%N) + (rec(row1,row2-2)) %N)%N;
            ans = ((ans%N) + (rec(row1-1,row2-2)) %N)%N;
            
        }
            
        return dp[row1][row2] = ans %N;
    }
    
    int numTilings(int n) {
        return rec(n,n);   
    }
};
