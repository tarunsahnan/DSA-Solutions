class Solution {
public:
    void presum(vector<vector<int>> &mat){
        int n = mat.size(), m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                mat[i][j]+=mat[i][j-1];
            }
        }
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='0')   mat[i][j] = 0;
                else    mat[i][j] = 1;
            }
        }
        presum(mat);
        
        
        int ans = 0;
        
            for(int c1 = 0;c1<m;c1++){
        for(int c2 = c1;c2<m;c2++){
                int sum = 0;
                for(int i=0;i<n;i++){
                    
                    int temp = mat[i][c2];
                    if(c1>0)    temp-=mat[i][c1-1];
                    if(temp==(c2-c1+1)){
                        sum+=temp;
                        ans = max(ans, sum);
                    }
                    else    sum = 0;
                    
                }
            }
        }
        
        return ans;
        
    }
};