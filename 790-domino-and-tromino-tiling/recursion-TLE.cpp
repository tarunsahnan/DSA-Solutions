//Question Link -->  https://leetcode.com/problems/domino-and-tromino-tiling/

class Solution {
public:
    
    const int N = 1e9 +7;
    
    int rec(int row1, int row2){
        
        if(row1 ==0 and row2==0)
            return 1;
        
        if(row1<0 or row2<0)
            return 0;
        
        int ans=0;
        
        if(row1 == row2){
            ans+= (rec(row1-2,row2-2))%N;
            ans+= (rec(row1-1,row2-1))%N;
            ans+= (rec(row1-2,row2-1))%N;
            ans+= (rec(row1-1,row2-2))%N;    
        }
        
        if(row1 > row2){
            
            ans += rec(row1 -2,row2);
            ans += rec(row1-2,row2-1);
            
        }
        
        if(row1 < row2){
            
            ans += rec(row1,row2-2);
            ans += rec(row1-1,row2-2);
            
        }
            
        return ans;
    }
    
    int numTilings(int n) {
        return rec(n,n);   
    }
};
