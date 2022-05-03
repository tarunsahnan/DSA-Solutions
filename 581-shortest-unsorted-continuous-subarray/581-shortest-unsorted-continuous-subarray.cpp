class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        
        int n=nums.size(),maxx=INT_MIN,minn=INT_MAX,st=-1,end=-1;;
        
        int left=0,right=n-1;
        
        while(right >= 0){
            
            if(nums[left] < maxx){
                st=left;
            }
            else
                maxx=nums[left];
            
            if(nums[right] > minn){
                end=right;
            }
            else
                minn=nums[right];
                    
            left++,right--;
            
        }
        cout<<st<<" "<<end;
        return st !=-1? abs(end-st)+1:0;
        
    }
};