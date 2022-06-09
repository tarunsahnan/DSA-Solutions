class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i1=0,i2=nums.size()-1;
        
        while(i1 <=i2 ){
            
            if(nums[i1]+nums[i2] == target) return {i1+1,i2+1};
            else if(nums[i1]+nums[i2] > target) i2--;
            else i1++;
            
        }
        return {};
    }
};