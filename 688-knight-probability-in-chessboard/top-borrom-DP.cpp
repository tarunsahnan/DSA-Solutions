//Question Link --> https://leetcode.com/problems/knight-probability-in-chessboard/

int dx[8]={1,1,-1,-1,2,2,-2,-2};
    int dy[8]={2,-2,2,-2,1,-1,1,-1};
    double dp[25][25][105];
    
    double knightProbability(int n, int k, int row, int column){
        
        if (row <0 or row>=n or column<0 or column >=n)
            return 0;
        
        if(k==0)                
            return 1;
        
        if(dp[row][column][k] != 0) return dp[row][column][k];
        
        double ans=0;
        for(int i=0;i<8;i++)
            ans+= knightProbability(n,k-1,row+dx[i],column+dy[i])/8;
        
        
        dp[row][column][k]=ans;
        return ans;
    }
