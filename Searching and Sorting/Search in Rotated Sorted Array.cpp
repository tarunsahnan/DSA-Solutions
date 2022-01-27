//Question Link -->https://leetcode.com/problems/search-in-rotated-sorted-array/

int helper(vector<int>& nums,int target,int start, int end){
        
        if(start>end)        
        return -1;
        
        int mid=(start+end)/2;
        if(nums[mid]==target)
        return mid;
    
        

    if(nums[start] <= nums[mid]){
        //means first half is sorted

        if(nums[start] <= target and target<= nums[mid])
            return helper(nums,target,start,mid);
        else
            return helper(nums,target,mid+1,end);}

    else{
        
        //means second half is sorted
        if(nums[mid] <= target and target<= nums[end])
            return helper(nums,target,mid+1,end);
        else
            return helper(nums,target,start,mid);

    }
    }
        
    int search(vector<int>& nums, int target) {
        return helper(nums,target,0,nums.size()-1);
    }
