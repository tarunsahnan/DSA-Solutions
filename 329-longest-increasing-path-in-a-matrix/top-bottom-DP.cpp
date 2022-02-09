//Question Link --> https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

class Solution {
public:
    
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int dp[200][200];
    bool visited[200][200];
    
    int rec(vector<vector<int>>& m, int i,int j,int& max_moves){
        
        if(dp[i][j] > 0) return dp[i][j];
        
        int currmoves = 1;
        
        visited[i][j] = true;
        
        for(int k=0;k<4;k++){    
            int newX = i + dx[k]; int newY = j + dy[k];
            
            if(newX >= 0 and newY >= 0 and newX < m.size()  and newY < m[0].size() and visited[newX][newY] == false and m[newX][newY] > m[i][j]){
                currmoves = max(currmoves, 1+ rec(m,newX,newY,max_moves));
            }
        
        }
        
        visited[i][j] = false;
        dp[i][j] = currmoves;
        max_moves = max(currmoves,max_moves);
        return currmoves;
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& m) {
        

        int max_moves=1;

        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size();j++)
                if(dp[i][j]==0)
                    dp[i][j] = rec(m,i,j,max_moves);
        
        return max_moves;
        
    }
};
