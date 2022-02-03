//Question Link --> https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    
    
    int xMoves[4]={0,1,0,-1};
    int yMoves[4]={1,0,-1,0};
    
    int orangesRotting(vector<vector<int>>& grid) {
    
        queue<pair<int,int>> q;
        int fresh=0, min=0;
        
        int row=grid.size(), col=grid[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(grid[i][j] == 2)
                    q.push({i,j});
                
                else if(grid[i][j] == 1)
                    fresh++;  
            }
        }
        
        while(! q.empty() ){
            
            int n=q.size();
            
            for(int i=0;i<n;i++){
                pair<int,int> top=q.front(); q.pop();

                for(int i=0;i<4;i++){
                    
                    int r=top.first +xMoves[i];
                    int c=top.second +yMoves[i];

                    if(r>-1 and r<row and c>-1 and c<col and grid[r][c] == 1){
                        grid[r][c] = 2;
                        q.push({r,c});
                        fresh--;
                    }

                }
            
            }
            min++;
        }
        
        return fresh == 0 ? (min == 0 ? 0:min-1) :-1;    
    }
};
