class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1)
            return nums[0];
        if(nums.size() == 2)
            return max(nums[0],nums[1]);
        
        int prev=0,prevprev=0;
        
        for(int i=0;i<nums.size();i++){
            
            int temp=prev;
            prev = max(prev,prevprev+nums[i]);
            prevprev=temp;
        }
        return prev;
    }
};