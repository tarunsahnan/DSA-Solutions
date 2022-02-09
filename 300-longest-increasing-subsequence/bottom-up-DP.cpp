//Question Link --> https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> dp(n+5,1);
        int maxlen=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                
                if(nums[j] < nums[i])
                    dp[i] = max(dp[i], 1+dp[j]);
                    maxlen=max(dp[i],maxlen);
            }
        }
        
        return maxlen;
        
    }
};
