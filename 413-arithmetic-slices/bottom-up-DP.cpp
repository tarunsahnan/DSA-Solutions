//Question Link --> https://leetcode.com/problems/arithmetic-slices/submissions/

class Solution {
public:
    int dp[5005];
    int numberOfArithmeticSlices(vector<int>& nums) {
    
        if(nums.size() < 3) return 0;
        
        int res=0;
        
        for(int i=2;i<nums.size();i++){
            
            if(nums[i-2]-nums[i-1] == nums[i-1]-nums[i]){
                dp[i]=dp[i-1]+1;
            }
            res+=dp[i];
        }
        return res;
    }
};
