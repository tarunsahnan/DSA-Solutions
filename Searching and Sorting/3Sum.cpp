//Question Link --> https://leetcode.com/problems/3sum/

vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            if(i>0 and nums[i]==nums[i-1]) continue;
            
            int curr=nums[i],start=i+1,end=n-1;
            
            while(start<end){
                
                if(curr+nums[start]+nums[end] == 0){
                    
                    v.push_back({curr,nums[start],nums[end]});
                    start++;
                    end--;
                    
                    while(start<end and nums[start] == nums[start-1]){
                        start++;
                        cout<<"uuuu";
                    }
                    
                    while(start<end and nums[end] == nums[end+1])
                        end--;
                }
                
                else if(curr+nums[start]+nums[end] >0)
                    end--;
                
                else 
                    start++;
                
            }
            
        }
        
        return v;
    }
