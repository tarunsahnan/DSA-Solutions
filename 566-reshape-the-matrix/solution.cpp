//Question Link --> https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        //invalid input
        if(mat.size()* mat[0].size()    != (r*c))    return mat;
        
        vector<vector<int>> res(r,vector<int>(c,0));
        int x=0,y=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                res[x][y]=mat[i][j];
                y++;
                if(y==c){
                    y=0;
                    x++;
                }
            }
        }
        return res;
    }
};