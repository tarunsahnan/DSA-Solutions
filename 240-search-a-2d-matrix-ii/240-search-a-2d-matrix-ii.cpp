class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i=0,j=matrix[0].size()-1;
        
        while(i<matrix.size() and j>=0){
            cout<<matrix[i][j];
            if(matrix[i][j] > target){
                j--;
            }
            else if(matrix[i][j] < target)
                i++;
            else
                return true;
        }
        return false;
        
    }
};