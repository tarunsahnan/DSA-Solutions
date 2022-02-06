//Question Link -->  https://leetcode.com/problems/target-sum/

    
    int n;
    
    int rec(const vector<int>& nums, const int& target, int index, int sumsofar, vector<unordered_map<int,int>>& dp){
        
        
        if(index == n){
            if(sumsofar == target) return 1;
                return 0;
        }
        
        if(dp[index].count(sumsofar) == 0)
    
         dp[index][sumsofar] = rec(nums,target, index+1, sumsofar+nums[index],dp)
                                 +
                               rec(nums,target, index+1, sumsofar-nums[index],dp);
    
        return dp[index][sumsofar];
       
    }
    
    int findTargetSumWays(vector<int>& nums, int& target) {
                 
        vector<unordered_map<int,int>> dp(nums.size());
        n=nums.size();
        return rec(nums,target,0,0,dp);
        
    }
