//Question Link --> https://leetcode.com/problems/unique-paths-iii/

class Solution {
public:  
    
    int xmoves[4]={0,1,0,-1};
    int ymoves[4]={1,0,-1,0}; 
    
    void uniquepath(int& countsofar,int& result, vector<vector<int>>& grid, int& countofzeros,int x,int y){
        if(x<0 or x>(grid.size()-1) or y<0 or y>(grid[0].size()-1) or grid[x][y]==-1)
        {
            return;
        }
        
        if(grid[x][y]==2){
            if(countsofar==countofzeros)
                ++result;            
            return;
        }
        if(grid[x][y]==0)
        countsofar++;
        
        int temp=grid[x][y];
        grid[x][y]=-1; // -1 means visited
        
        for(int i=0;i<4;i++){
                int nextx=x+xmoves[i];
                int nexty=y+ymoves[i];
                
                uniquepath(countsofar,result,grid,countofzeros,nextx,nexty);            
        }
        
        grid[x][y]=temp; //backtrack
        countsofar--;
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int countofzeros=0;
        for(auto i:grid)
            countofzeros+=count(i.begin(),i.end(),0);
        int startx,starty;
        
            for(int i=0;i<grid.size();i++)
                for(int j=0;j<grid[0].size();j++)
                    if(grid[i][j]==1)
                    {startx=i;starty=j;}
        
        int result=0;
        int countsofar=0;
        
        uniquepath(countsofar,result,grid,countofzeros,startx,starty);
        return result;   
    }
};

