//Question Link --> https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=k%nums.size(); //if k is greater then size
        
        reverse(nums.begin(),nums.end()); //reverse full array
        
        reverse(nums.begin(),nums.begin()+n);   //reverse first k elements
        
        reverse(nums.begin()+n,nums.end());     // reverse remaining elements
        
    }
};
