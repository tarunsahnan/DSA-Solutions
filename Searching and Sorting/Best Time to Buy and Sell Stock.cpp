//Question Link --> https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

int maxProfit(vector<int>& prices) {
        
        int minn=INT_MAX,maxx_profit=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            
            minn=min(minn,prices[i]);
            maxx_profit=max(maxx_profit,prices[i]-minn);
            
        }   
        
        return maxx_profit;  
    }
