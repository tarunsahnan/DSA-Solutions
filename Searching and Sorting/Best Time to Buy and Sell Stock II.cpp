//Question Link --> https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

int maxProfit(vector<int>& prices) {
        
        int profit=0;
        
        for(int i=1;i<prices.size();i++)
        
            if(prices[i-1]<prices[i])
            
                profit+=prices[i]-prices[i-1];
        
        return profit;
        
    } 
