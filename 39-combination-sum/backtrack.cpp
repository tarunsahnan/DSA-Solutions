//Question Link --> https://leetcode.com/problems/combination-sum/

class Solution {
public:
    int n;
    void helper(vector<vector<int>>& res, vector<int> setsofar,vector<int>& candidates, const int& target, int sumsofar,int index){
        
        if(sumsofar == target) {
            
            sort(setsofar.begin(),setsofar.end());
            
            if(find(res.begin(),res.end(),setsofar) == res.end())
                res.push_back(setsofar);
            return;
        }
        if(sumsofar > target) return;
        
        
        for(int i=index;i<n;i++){
                
            setsofar.push_back(candidates[i]);
            helper(res, setsofar,candidates,target,sumsofar + candidates[i] ,index);
            setsofar.pop_back();
            
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        n=candidates.size();
        
        vector<vector<int>> res;
        vector<int> setsofar;
        
        helper(res,setsofar,candidates,target,0,0);
        
        return res;
    }
};
