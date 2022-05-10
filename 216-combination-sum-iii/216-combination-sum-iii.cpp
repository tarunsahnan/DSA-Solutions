class Solution {
public:
    
    void helper(vector<vector<int>>& res, vector<int>& soFar,int k,int n,int curr){
        
        if(curr > 10)  return;
        
        if(k<0 || n<0) return;
        
        if(n==0){
            if(k == 0)
                res.push_back(soFar);
            return;
        }
        // cout<<endl;
        // for(auto i:soFar)
        //         cout<<i<<" ";
        
        helper(res,soFar,k,n,curr+1);
        
        soFar.push_back(curr);
        helper(res,soFar,k-1,n-curr,curr+1);
        soFar.pop_back();
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> res;
        vector<int> soFar;
        helper(res,soFar,k,n,1);
        
        return res;
        
    }
};