//Question Link --> https://leetcode.com/problems/missing-number/

int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size();i++)
            if(nums[i]!=i)
                return i;
        return (i);
    }
