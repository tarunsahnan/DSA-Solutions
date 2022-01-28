//Question Link --> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

vector<int> searchRange(vector<int>& nums, int target) {
        
        int low=0,hi=nums.size()-1,mid,leastindex=INT_MAX;
        bool found=false;
        
        vector<int> out;
        
        while(low<=hi){
            
        mid=(hi+low)/2;
            
           if(nums[mid]==target){
            
               found=true;
               leastindex=min(leastindex,mid);
               hi=mid-1;
               
           }
           
            else if(nums[mid]>target)
               hi=mid-1;
            
            else
            low=mid+1;

    }
    low=hi=leastindex;
    if(found){
        
        while(hi!=nums.size()   and   nums[hi]==target)
            hi++;
        
    }
    else
        low=hi=-1;
        
    out.push_back(low);
    out.push_back(max(low,hi-1));
        
     return out;   
    }
