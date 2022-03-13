//Question Link --> https://leetcode.com/problems/maximize-the-topmost-element-after-k-moves/

class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        if(k%2 !=0 and nums.size()==1) //odd
            return -1;
        
        
        int n=nums.size(),ans=-1;
        
        if(n > k)
            ans = nums[k];
        
        for(int i=0;i<n and i<k-1;i++){
            ans=max(ans,nums[i]);
        }
        return ans;
    }
};