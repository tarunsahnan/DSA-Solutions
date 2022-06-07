class Solution {
public:
    int dp[10004];
    long helper(vector<int>& nums,int index){
        if(index >= nums.size()-1)
            return 0;
        if(dp[index]) return dp[index];
        long minJumps=INT_MAX;
        
        for(int i=1;i<=nums[index];i++){
            minJumps = min (minJumps, 1+ helper(nums,index+i));
        }
        return dp[index]=minJumps;
    }
    
    int jump(vector<int>& nums) {
        return helper(nums,0);
    }
};