class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,-1));
        int value=1,i=0,j=0;
        while(value <= n*n){
            
            //right
            for(;j<n and value <= n*n ;j++){
                if(res[i][j] != -1) break;
                res[i][j]=value++;
            }
            j--;i++;
            
            // //down
            for(;i<n and value <= n*n ;i++){
                if(res[i][j] != -1) break;
                res[i][j]=value++;
            }
            i--;j--;
            
            //left
            for(;j>=0 and value <= n*n ;j--){
                if(res[i][j] != -1) break;
                res[i][j]=value++;
            }
            j++;i--;
            
            //up
            for(;i>=0 and value <= n*n ;i--){
                if(res[i][j] != -1) break;
                res[i][j]=value++;        
            }
            i++;j++;
        }
        return res;
    }
};