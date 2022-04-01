//OJ --> https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        
        //pivot element
        int pivot=0;
        for(int i=nums.size()-1;i>=1;i--)
            if(nums[i] > nums[i-1]){
                pivot=i;
                break;
            }
        
        //next greater element in subarray [pivot:]
        int NGE=0;
        
        if(pivot == 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=nums.size()-1;i>=pivot;i--){
            if(nums[i] > nums[pivot-1]){
                NGE=i;
                break;
            }
        }
        
        //swap pivot-1, NGE
        swap(nums[pivot-1],nums[NGE]);
        
        //reverse subarray[pivot-1:]
        
        reverse(nums.begin()+pivot,nums.end());
        
    }
};