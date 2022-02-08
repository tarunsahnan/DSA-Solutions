//Question Link --> https://leetcode.com/problems/subsets/

class Solution {
public:
    
    void generate(vector<int>& substr, vector<int>&nums,vector<vector<int>>& result,int start){
        
        if(start==nums.size()){
            result.push_back(substr);
            return;
        }
        
        generate(substr,nums,result,start+1);
        
        substr.push_back(nums[start]);
        generate(substr,nums,result,start+1);
        substr.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
        
    int start=0;
    vector<int> substr;
        
    generate(substr,nums,result,start);
        
    return result;
        
        
    }
};
