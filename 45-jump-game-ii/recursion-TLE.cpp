//Question Link --> https://leetcode.com/problems/jump-game-ii/

class Solution {
public:
    
    int rec(vector<int>& nums, int curr_pos){
        
        if(curr_pos >= nums.size()-1 ) return 0;
        
        int min_jumps = 10000;
        for(int i=1;i<=nums[curr_pos];i++)
            min_jumps = min(min_jumps, 1 + rec(nums,curr_pos+i));
        
        return min_jumps;
        
    }
    
    int jump(vector<int>& nums) {
        
        return rec(nums,0);
    }
};
