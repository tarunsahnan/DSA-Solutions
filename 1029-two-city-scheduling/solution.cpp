//OJ--> https://leetcode.com/problems/two-city-scheduling/

class Solution {
public:
    int size;
    int dp[102][102][102];
    
    int helper(vector<vector<int>>& costs,int i, int n1,int n2){
            
        if(i >=costs.size() || n1> size  || n2> size)
            return 0;
        
        if(dp[i][n1][n2]!=0)
            return dp[i][n1][n2];
    
        if(n1 == size and  n2<size)
           return dp[i][n1][n2]=costs[i][1]+helper(costs,i+1,n1,n2+1);
           
        if(n2 == size and  n1<size)
           return dp[i][n1][n2]=costs[i][0]+helper(costs,i+1,n1+1,n2);
        
        return dp[i][n1][n2]=min(costs[i][1]+helper(costs,i+1,n1,n2+1),costs[i][0]+helper(costs,i+1,n1+1,n2));
    
    }
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
       
        size=costs.size()/2;
        return helper(costs,0,0,0);
        
        
    }
};