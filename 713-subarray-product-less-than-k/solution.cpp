//oj --> https://leetcode.com/problems/subarray-product-less-than-k/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int prod=1,cnt=0;
        
        for(int i=0,j=0;j<nums.size();j++){
            
            prod *= nums[j];
            
            while(i<=j and prod >= k) 
                prod /= nums[i++];
            
            cnt += j-i+1;
        }
        
        return cnt;
        
        
    }
};