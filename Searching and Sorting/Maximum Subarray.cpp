// Question Link --> https://leetcode.com/problems/maximum-subarray/

int maxSubArray(vector<int>& nums) {
        
        int maxsum=nums[0],tempsum=nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            tempsum=max(tempsum+nums[i],nums[i]);
            maxsum=max(maxsum,tempsum);
            
        }
        return maxsum;
    }
