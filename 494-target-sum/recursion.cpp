//Question Link --> https://leetcode.com/problems/target-sum/

class Solution {
public:
    
    
    int count;
    
   void rec(vector<int>& nums, int& target, int index, int sumsofar){
        
        if(index == nums.size()  and target == sumsofar){
            count++;
            return;
        }
       if(index == nums.size()) return;
        
    rec(nums,target, index+1, sumsofar+nums[index]);
    rec(nums,target, index+1, sumsofar-nums[index]);
       
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
                 
        rec(nums,target,0,0);
        return count;
        
    }
};
