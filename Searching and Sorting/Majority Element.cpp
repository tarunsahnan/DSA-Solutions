//Question Link-->https://leetcode.com/problems/majority-element/

//In this question, I have used: Boyer-Moore Majority Voting Algorithm
//Time Complexity: O(n)
//Space Complexity: O(1)


int majorityElement(vector<int>& nums) {
        
        int votes=0,majority=-1;
        
        for(int i=0;i<nums.size();i++){
            
            if(votes==0){
                majority=nums[i];
                votes=1;            
            }
            
            else if(nums[i]==majority)
                votes++;
            
            else if(nums[i]!=majority)
                votes--;
            
        }
        
        return majority;
        
    }
