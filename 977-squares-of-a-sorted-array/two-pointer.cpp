//Question Link --> https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
       
        //two pointer approach --> for followup question
        
        vector<int> res(nums.size(),0);
        
        int left=0,right=nums.size()-1,index=nums.size()-1;
        
        //square of each element
        for(int i=0;i<nums.size();i++)
            nums[i]*=nums[i];
        
        while(left <= right){
            
            if(nums[left] > nums[right])
                res[index--] = nums[left++];
            
            else
                res[index--] = nums[right--];
        }
        
        return res;
    }
};
