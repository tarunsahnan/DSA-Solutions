class Solution {
public:
    bool visited[50][50];
    void helper(vector<vector<int>>& image, int r, int c, int& newColor,int& compare){
        
        if(r<0 || r>=image.size() || c<0 || c>=image[0].size() || image[r][c] != compare || visited[r][c] ==true)
            return;
        
        image[r][c]=newColor;
        visited[r][c]=true;
        
        helper(image,r+1,c,newColor,compare);
        helper(image,r-1,c,newColor,compare);
        helper(image,r,c+1,newColor,compare);
        helper(image,r,c-1,newColor,compare);

    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int compare=image[sr][sc];
        // int m=image.size(),n=image[0].size();
        
        helper(image,sr,sc,newColor,compare);
        
        return image;
        
    }
};