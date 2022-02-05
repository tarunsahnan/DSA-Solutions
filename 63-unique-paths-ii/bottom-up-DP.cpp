//Question Link --> https://leetcode.com/problems/unique-paths-ii/

class Solution {
public:
    
    //Bottom Up DP
    int DP[101][101];
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        
        int m=Grid.size();
        int n=Grid[0].size();
        
        for(int i=0;i<m;i++){
            if(Grid[i][0] == 1) 
                break;
            DP[i][0] =1;
        }
        
        for(int i=0;i<n;i++){
            if(Grid[0][i] == 1) 
                break;
            DP[0][i] =1;
        }
        
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(Grid[i][j] == 1) DP[i][j]=0;
                else
                DP[i][j] = DP[i-1][j] + DP[i][j-1];
                
            }
        }
        
        return DP[Grid.size()-1][Grid[0].size()-1];
        
    }
};
