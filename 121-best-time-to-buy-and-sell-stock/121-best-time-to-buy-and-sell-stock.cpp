class Solution {
public:
    int maxProfit(vector<int>& prices) {
     
        int res=0, temp=INT_MAX;
        
        for(auto& i:prices){
            temp = min(temp,i);
            res = max(res,i-temp);
        }
        
        return res;
    }
};