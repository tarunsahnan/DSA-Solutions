//Question Link --> https://leetcode.com/problems/sort-colors/

void sortColors(vector<int>& nums) {
        
        int c0=0,c1=0,c2=nums.size()-1;
        
        while(c1<=c2){
            
            switch(nums[c1]){
                
                case 0:
                    
                    swap(nums[c0],nums[c1]);
                    c0++;c1++;
                    break;

                case 1:
                
                    c1++;
                    break;

                case 2:
                    
                    swap(nums[c2],nums[c1]);
                    c2--;
            }
    
            }
        
    }
