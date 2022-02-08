//Question Link --> https://leetcode.com/problems/coin-change/

class Solution {
public:
    
    map<int,int> Map;
    
    int coinchange(vector<int>& coins, int amount) {
    
        if(amount == 0) return 0;
        if(Map.find(amount) != Map.end()) return Map[amount]; 
        int res = INT_MAX;
        
        for(int i=0;i<coins.size();i++){
            if(coins[i] <= amount)
            res=min(res,coinchange(coins,amount - coins[i]));
        }
        if(res != INT_MAX)
            res += 1;
        
        Map[amount] = res;
        return res;
    }
    
    int coinChange(vector<int>& coins, int amount){
        int res=coinchange(coins,amount);
        
        if(res == INT_MAX) return -1;
        
        return res;
    }
};
