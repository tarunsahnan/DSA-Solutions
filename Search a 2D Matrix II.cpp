//Question Link--> https://leetcode.com/problems/search-a-2d-matrix-ii/

//Algo Used: Binary Search

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size(),n=matrix[0].size(),row=0,column;
        column=n-1;
        
        while(row<m && column>=0){
            
            if(matrix[row][column]==target)
                return true;
            
            else if(matrix[row][column]>target)
                column--;
            
            else
                row++;
            
        }
        
        return false;
        
    }
