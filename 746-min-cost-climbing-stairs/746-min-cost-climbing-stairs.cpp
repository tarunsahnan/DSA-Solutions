class Solution {
public:
    int dp[1005];
    int helper(vector<int>& cost,int index){
        if(index >= cost.size()){
            return 0;
        }
    if(dp[index]!=0)
        return dp[index];
        
        return dp[index]=cost[index] + min(helper(cost,index+1),helper(cost,index+2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int res=0,index=0;
        
        return min(helper(cost,0),helper(cost,1));
        
    }
};