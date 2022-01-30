//Question Link --> https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array/

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> result,left,right;
        
        int HPD=-1,c0=0,c1=0,n=nums.size();
        
        left.push_back(0);
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) c0++;
            left.push_back(c0);
        }
        
        right.push_back(0);
        for(int i=n-1;i>=0;i--){
            if(nums[i] == 1) c1++;
            right.push_back(c1);
        }
        
        
        for(int i=0;i<=n;i++)
        {
            int tempHPD=left[i]+right[n-i];
            if(tempHPD > HPD){
                
                HPD=tempHPD;
                result.clear();
                
                result.push_back(i);
            }
            
            else if(tempHPD == HPD)
                result.push_back(i);
        }
        
        
        return result;
    }
};
