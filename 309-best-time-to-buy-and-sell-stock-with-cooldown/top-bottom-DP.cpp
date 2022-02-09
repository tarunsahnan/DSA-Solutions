//Question Link --> https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/

class Solution {
public:
    
    
    int dp[50005][2];
    
   int rec(vector<int> &prices,int i,int hold){
       
       // BASE CONDITION
       if(i>=prices.size()){
           return 0;
       }
       if(dp[i][hold] != 0){
           return dp[i][hold];
       }
       
       // CURRENTLY HAVENT BOUGHT THE STOCK
       if(hold == 0){
           int op1 =   rec(prices,i+1,1) - prices[i];
           int op2 =  rec(prices,i+1,0);
           
           return  dp[i][hold] =  max(op1,op2);
       }
       // STATE OF SELLING THE STOCK
       else if(hold == 1){
           
           int op1 = prices[i] + rec(prices,i+2,0);
           int op2 = rec(prices,i+1,1);
           
           return  dp[i][hold] =  max(op1,op2);
       }
       return 0;
       
       
   }

    
    int maxProfit(vector<int>& prices) {
        
        return rec(prices,0, 0);
    }
};
