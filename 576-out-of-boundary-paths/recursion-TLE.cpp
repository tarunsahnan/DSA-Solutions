//Question Link --> https://leetcode.com/problems/out-of-boundary-paths/

class Solution {
public:
    
    const long long N = 1e9 + 7;
    
    int findPath(const int& m,const int& n, int maxMove, int startRow, int startColumn)
    {
        
        
        if(startRow >= m || startRow < 0 || startColumn >= n || startColumn <0)
            return 1;
        
        if(maxMove == 0)
        return 0;
    
        
        int up = (findPath(m,n,maxMove-1,startRow-1,startColumn)) % N;
        int down = (findPath(m,n,maxMove-1,startRow+1,startColumn)) % N;
        int left = (findPath(m,n,maxMove-1,startRow,startColumn-1)) % N;
        int right = (findPath(m,n,maxMove-1,startRow,startColumn+1)) % N;
        
        return (up + down + left + right) % N;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        return findPath(m,n,maxMove,startRow,startColumn);
    
    }
};
