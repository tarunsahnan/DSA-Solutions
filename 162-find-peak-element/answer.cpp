//Question Link --> https://leetcode.com/problems/find-peak-element/

int findPeakElement(vector<int>& nums) {
        
        int lo=0,hi=nums.size()-1,mid;
        
        while(lo<hi){
            
            mid=(hi+lo)/2;
            
            if(nums[mid]>nums[mid+1])
                hi=mid;
            
            else 
                lo=mid+1;
        
        }
        
        return lo;
