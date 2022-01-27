//Question Link --> https://leetcode.com/problems/permutations-ii/

class Solution {
public:
    
    
    void perms(vector<int>& nums,vector<vector<int>>& result,int start){
        
        if(start==nums.size()){
            if(find(result.begin(),result.end(),nums) == result.end() )
                result.push_back(nums);
            return;
        }
        
        for(int i=start;i<nums.size();i++){
            swap(nums[start],nums[i]);
            perms(nums,result,start+1);
            swap(nums[start],nums[i]);   
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> result;
        
        perms(nums,result,0);
        
        return result;
    }
};
