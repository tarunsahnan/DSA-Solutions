//Question Link --> https://leetcode.com/problems/jump-game/

class Solution {
public:   
    bool canJump(vector<int>& nums) {
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == 0) return false;
            nums[i]=max(nums[i-1]-1,nums[i]);
        }
        return true;
    }
  
};
