//Question Link --> https://leetcode.com/problems/next-greater-element-ii/

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> st;
        int maxi=0,i,n=nums.size();
        vector<int> res(n);
        for(i=0;i<n;i++)
            if(nums[i] > nums[maxi])
                maxi=i;
        
        i=maxi;
        do{
                       
            while(!st.empty() and nums[st.top()] <= nums[i])
                st.pop();
            
            if(st.empty())
                res[i]=-1;
            
            else
                res[i]=nums[st.top()];
            
            st.push(i);
            i--;
            
            if(i<0) i=n-1;
            
        }while(i!=maxi);
        
        return res;   
    }
};
