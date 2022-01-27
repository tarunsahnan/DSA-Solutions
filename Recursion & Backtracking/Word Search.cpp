//Question Link --> https://leetcode.com/problems/word-search/

class Solution {
public:
    
    int xmoves[4]={0,1,0,-1};
    int ymoves[4]={1,0,-1,0};

    bool helpexist(vector<vector<char>>& board, string word,int x,int y){
        
        if(!word.size())
            return true;
        
        if( x<0 || x>=board.size() || y<0 || y>=board[0].size() || board[x][y]!=word[0] )
            return false;

        
        char temp=board[x][y];
        board[x][y]='*';
        
        for(int i=0;i<4;i++){
            
            int nextX=x+xmoves[i];
            int nextY=y+ymoves[i];
            
            if(helpexist(board,word.substr(1),nextX,nextY))
                return true;
            
        }
        board[x][y]=temp;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string& word) {
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[0].size();j++)
                if(board[i][j]==word[0]){
                    if(helpexist(board,word,i,j))
                       return true;
                }
                return false;   
    }
};
