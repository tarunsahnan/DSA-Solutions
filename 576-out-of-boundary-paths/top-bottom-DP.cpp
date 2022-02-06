//Question Link --> https://leetcode.com/problems/out-of-boundary-paths/

const long long N = 1e9 + 7;
    
    int findPath(const int& m,const int& n, int maxMove, int startRow, int startColumn, vector<vector<vector<int>>>& dp)
    {
        
        
        if(startRow >= m || startRow < 0 || startColumn >= n || startColumn <0)
            return 1;
        
        if(maxMove == 0)
        return 0;
    
        if(dp[maxMove][startRow][startColumn] == -1){
        int up = (findPath(m,n,maxMove-1,startRow-1,startColumn,dp)) % N;
        int down = (findPath(m,n,maxMove-1,startRow+1,startColumn,dp)) % N;
        int left = (findPath(m,n,maxMove-1,startRow,startColumn-1,dp)) % N;
        int right = (findPath(m,n,maxMove-1,startRow,startColumn+1,dp)) % N;
        
            dp[maxMove][startRow][startColumn] = ((((up + down)%N + left)%N) + right) % N;
        
        }
        return dp[maxMove][startRow][startColumn];
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        vector<vector<vector<int>>> dp (maxMove +1, vector<vector<int>> (m +5, vector<int> (n+5,-1)));
        return findPath(m,n,maxMove,startRow,startColumn,dp);
    }
