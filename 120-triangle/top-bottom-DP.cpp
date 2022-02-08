//Question Link --> https://leetcode.com/problems/triangle/

class Solution {
public:
    
    int dp[205][205];
    
    int rec(vector<vector<int>>& triangle,int vecindex,int index){
        
        if(vecindex == triangle.size() -1)
            return triangle[vecindex][index];
        
        if(dp[vecindex][index] != -1) return dp[vecindex][index];
        
        int option1 = rec(triangle, vecindex+1,index+1);
        int option2 = rec(triangle, vecindex+1,index);
        
        dp[vecindex][index]= triangle[vecindex][index] + min(option1,option2);
        
        return dp[vecindex][index];   
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        for(int i=0; i< 205;i++)
            for(int j=0;j<205;j++)
                dp[i][j] =-1;
        
        return rec(triangle,0,0);
    }
};
