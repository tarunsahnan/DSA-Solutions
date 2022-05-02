class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i=0,j=0,k=nums.size()-1;
        
        while(j<=k){
            
            // for(auto i:nums)
            //     cout<<i<<" ";
            // cout<<endl;
            
            switch(nums[j]){
                    
                case 0:
                    swap(nums[i],nums[j]);
                    j++;
                    i++;
                    break;
                
                case 1:

                    j++;
                    break;
                
                case 2:
                    swap(nums[j],nums[k]);
                    k--;
                    break;

            }
            
        }
        
        
    }
};