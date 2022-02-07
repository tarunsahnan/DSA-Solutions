//Question Link --> https://leetcode.com/problems/knight-probability-in-chessboard/

class Solution {
public:
    
    int dx[8]={1,1,-1,-1,2,2,-2,-2};
    int dy[8]={2,-2,2,-2,1,-1,1,-1};
    
    
    double rec(int n,int k,int row, int column){
        
        
        if (row <0 or row>=n or column<0 or column >=n)
            return 0;
        
        if(k==0)                
            return 1;
        
        
        double ans=0;
        for(int i=0;i<8;i++)
            ans+=rec(n,k-1,row+dx[i],column+dy[i])/8;
        
        return ans;
    }

    double knightProbability(int n, int k, int row, int column) {
        
        return rec(n,k,row,column);
    }
};
