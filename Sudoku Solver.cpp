//Question Link --> https://leetcode.com/problems/sudoku-solver/

class Solution {
public:
    
    bool emptyde(vector<vector<char>>& board,int& x,int& y){
        
        for(x=0;x<9;x++){
            for(y=0;y<9;y++)
                if(board[x][y]=='.')
                    return false;
        }
        return true;
    }
    
    bool issafe(vector<vector<char>>& board,int x,int y,int i){
        
        //colme
        for(int k=0;k<9;k++)
            if(board[k][y]==i)
                return false;
        
        
        //row me
        for(int k=0;k<9;k++)
            if(board[x][k]==i)
                return false;
        
        
        //box me
        int row=x-x%3;
        int col=y-y%3;
        
        for(int k=0;k<3;k++)
            for(int j=0;j<3;j++)
                if(board[k+row][j+col] == i)
                    return false;
        
        return true;
    }
    
    bool solve(vector<vector<char>>& board,int x,int y) {
        
        if(x==9)    return true;
        if(y==9)    return solve(board,x+1,0);
        if(board[x][y]!='.') return solve(board,x,y+1);
        
        for(char i='1';i<='9';i++){
            if(issafe(board,x,y,i)){
                board[x][y]=i;
                if(solve(board,x,y+1)) return true;
                board[x][y]='.';
            }
        }
        return false;    
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
