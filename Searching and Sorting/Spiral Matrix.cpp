//Question Link --> https://leetcode.com/problems/spiral-matrix/

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int maxrow=matrix.size()-1,maxcolumn=matrix[0].size()-1,currrow=0,currcolumn=0,i;
        
        vector<int> v;
        int traversal=0;
        
        int totalcount=(matrix.size()*(matrix[0].size()));
        while(traversal < totalcount){
            
            for(i=currcolumn;traversal<totalcount and i<=maxcolumn;i++){
                v.push_back(matrix[currrow][i]);
                traversal++;
            }
            currrow++;
            
            for(i=currrow;traversal<totalcount and i<=maxrow;i++){
                v.push_back(matrix[i][maxcolumn]);
                traversal++;
            }
            maxcolumn--;
            
            for(i=maxcolumn;traversal<totalcount and i>=currcolumn;i--){
                v.push_back(matrix[maxrow][i]);
                traversal++;   
            }
            maxrow--;
            
            for(i=maxrow;traversal<totalcount and i>=currrow;i--){
                v.push_back(matrix[i][currcolumn]);
                traversal++;
            }
                currcolumn++;
        }
        
     return v;   
    }
