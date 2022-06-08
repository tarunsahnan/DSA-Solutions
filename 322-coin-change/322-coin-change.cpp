class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {
        
        vector<int> dp(sum+1,sum+1);
        dp[0]=0;
        for(int i=1;i<=sum;i++){
            for(auto j: coins){
                if(i-j >=0)
                    dp[i]=min(dp[i],1+dp[i-j]);
            }
        }
        
        return dp[sum] > sum ? -1 : dp[sum];

    }
};