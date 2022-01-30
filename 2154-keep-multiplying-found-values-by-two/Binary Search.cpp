//Question Link --> https://leetcode.com/problems/keep-multiplying-found-values-by-two/

class Solution {
public:
    
    int binarysearch(vector<int>& nums,int& target){
        
        int start=0,end=nums.size()-1,mid;
        
        while(start <= end){
            
            mid=(start+end)/2;
            
            if(nums[mid]==target)   return mid;
            
            else if(nums[mid] < target) start=mid+1;
            
            else end=mid -1;
        }
        
        return -1;
        
    }
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int result;
        
        while(true){
            
            if(binarysearch(nums,original) == -1)
                return original;
            
            original=original*2;
            
        }
        
        
    }
};
