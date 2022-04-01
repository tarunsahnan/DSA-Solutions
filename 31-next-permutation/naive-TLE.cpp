//This solution gives TLE

//Oj --> https://leetcode.com/problems/next-permutation/

class Solution {
public:
    
    void allPermutations( vector<vector<int>>& res, vector<int>& soFar,vector<int>& nums, int index){
        
        if(index == nums.size()){
            
            if(find(res.begin(),res.end(),soFar) == res.end())
            res.push_back(soFar);
            
            return;
            
        }
        
        
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            soFar.push_back(nums[index]);
            
            allPermutations(res,soFar,nums,index+1);
            swap(nums[index],nums[i]);
            soFar.pop_back();
        }
        
    }
    
    
    void nextPermutation(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> soFar;
        
        allPermutations(res,soFar,nums,0);
        sort(res.begin(),res.end());
        
        int index=find(res.begin(),res.end(),nums) - res.begin();

        if(index != res.size()-1)
            nums= res[index+1];
        else
            nums= res[0];
        
        
    }
};