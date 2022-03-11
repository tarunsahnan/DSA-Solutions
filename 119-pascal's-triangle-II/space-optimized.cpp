//Question Link --> https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int n) {
        
        vector<int> res(n+1,0);
        res[0]=1;
        
        for(int i=1;i<=n;i++){
            
            for(int j=i; j>=1; j--)
                res[j] += res[j-1];
            
        }
        
        return res;
    }
};