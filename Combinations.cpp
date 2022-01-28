//Question Link --> https://leetcode.com/problems/combinations/

class Solution {
public:
    
    void subset(vector<int>& strsofar, vector<vector<int>>& result, vector<int>& nums,int start,int& k){
        
        if(strsofar.size()==k){
            result.push_back(strsofar);
            return;
        }
        
        if(start==nums.size())
            return;
        
        subset(strsofar,result,nums,start+1,k);
        
        strsofar.push_back(nums[start]);
        subset(strsofar,result,nums,start+1,k);
        strsofar.pop_back();
        
    }
    vector<vector<int>> combine(int n, int k) {
        
        
        vector<int> strsofar,nums;
        vector<vector<int>> result;
        
        for(int i=1;i<=n;i++)
            nums.push_back(i);
        
        
        subset(strsofar,result,nums,0,k);
        return result;
    }
};
