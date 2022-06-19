class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int rsum=0;
        for(int i=1;i<nums.size();i++){
            rsum += nums[i];
        }
        
        if(rsum == 0)
            return 0;
        int lsum=nums[0];
        
        for(int i=1;i<nums.size();i++){
            rsum -= nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum +=nums[i];
        }
        return -1;
    }
};