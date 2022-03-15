//Question Link --> https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
     
        vector<vector<int>> res(n);
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<=i;j++){
                
                if(j==0 || j==i)// first or last element in the row
                    res[i].push_back(1);
                else{
                    res[i].push_back(res[i-1][j-1] + res[i-1][j]);
                }
            }
        }
        return res;
    
    }
    
    
};