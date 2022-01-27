//Question Link --> https://leetcode.com/problems/permutations/

class Solution {
public:
    
    void _permute(vector<vector<int>>& result,vector<int>& nums,int start){
        
        if(start==nums.size()){
            result.push_back(nums);
            return;
        }
        
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            _permute(result,nums,start+1);
            swap(nums[start],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> vecsofar;
        int start=0;
        _permute(result,nums,start);
        return result;   
    }
};
