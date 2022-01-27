//Question Link --> https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    
    bool isValidSudoku(vector<vector<char>>& board) {
     
        vector<set<int>> rows(9),cols(9),box(9);
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]=='.') continue;
                
                    char target=board[i][j];
                    if(rows[i].count(target) || cols[j].count(target) || box[(i/3)*3+(j/3)].count(target))
                        return false;
                    else{
                        rows[i].insert(target);
                        cols[j].insert(target);
                        box[(i/3)*3 + (j/3)].insert(target);
                    }
                
            }
        }
        return true;
    }
};
