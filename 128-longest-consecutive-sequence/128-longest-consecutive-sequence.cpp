class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 1)
            return 1;
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        
        int res=1,temp=1;
        
        for(int i=1;i<nums.size();i++){
                
                if(nums[i] == nums[i-1]) continue;
            
                if(nums[i]-1 == nums[i-1])
                    temp++;
                else
                    temp=1;
            
            res = max(res, temp);
        }
        return res;
    }
};