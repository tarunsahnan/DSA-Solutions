class Solution {
public:
    int dp[100005][2][3];
    int rec(vector<int> &prices, int i, int hold, int tt){
        if(tt >= 2 || i >= prices.size()){
            return 0;
        }
        if(dp[i][hold][tt] != -1){
            return dp[i][hold][tt];
        }
        
        if(hold == 0){
            int op1 = rec(prices, i+1, 1, tt) - prices[i];
            int op2 = rec(prices, i+1,0, tt);
            return dp[i][hold][tt] = max(op1,op2);
        }else if(hold == 1){
            int op1 = prices[i] + rec(prices, i+1, 0, tt+1);
            int op2 = rec(prices, i+1,1, tt);
            return dp[i][hold][tt] = max(op1,op2);
        }  
        return 0;
    }
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<100005;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<3;k++){
                    dp[i][j][k] = -1;
                }
            }
        }
        int ans = rec(prices, 0, 0, 0);
        return ans;
    }
};