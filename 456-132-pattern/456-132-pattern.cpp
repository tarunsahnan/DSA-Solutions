class Solution {
public:
    bool find132pattern(vector<int>& nums) { 
        int n=nums.size();
        int t3 = INT_MIN;
        
        stack<int> st;
        
        for(int i=n-1;i>-1;i--){
            if(nums[i] < t3) return true;
            
            while(!st.empty() and st.top() < nums[i]){
                t3=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }

};