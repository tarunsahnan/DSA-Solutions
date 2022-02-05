//Question Link --> https://leetcode.com/problems/unique-paths/

//Simplification of (m+n)! /(m! * n!).

class Solution {
public:
    
    int uniquePaths(int m, int n) {
    
        long long result=1;
        m--;n--;
        
        if(m<n)
            swap(m,n);
        int j=1;
        
        for(int i=m+1;i<=m+n;i++,j++){
            result*=i;
            result/=j;
        }
        return result;
        
    }
};
