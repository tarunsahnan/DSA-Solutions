class Solution {
public:
    int dp[2501];
    int lengthOfLIS(vector<int>& nums) {
        for(int i=0;i<2501;i++)
            dp[i]=1;
        int res=1;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i],1+dp[j]);
                    res=max(dp[i],res);
                }
            }
        }
        return res;
    }
};