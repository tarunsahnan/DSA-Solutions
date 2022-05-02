class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv) {
        
        sort(iv.begin(),iv.end());
        
        vector<vector<int>> res;
        res.push_back(iv[0]);
        
        for(int i=1;i<iv.size();i++){
            
            int newX=iv[i][0],newY=iv[i][1];
            int oldX=res.back()[0],oldY=res.back()[1];
            
            if(newX <= oldY){
                res.pop_back();
                res.push_back({min(newX,oldX),max(newY,oldY)});
                
            }
            else
                res.push_back(iv[i]);
            
        }
        return res;
        
    }
};