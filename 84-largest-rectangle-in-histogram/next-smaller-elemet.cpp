//Quesion Link --> https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    
    
    vector<int> leftsmall(vector<int>& height){
        
        int n=height.size();
        vector<int> res(n);
        stack<int> st;
        
        for(int i=0;i<n;i++){
            
            while(!st.empty()  and height[st.top()] >= height[i])
                st.pop();
            
          if(st.empty())
                res[i]=-1;
            
          else
                res[i]=st.top();
            
            st.push(i);
        }
        
        return res;
         
    }
    
    vector<int> rightsmall(vector<int>& height){
        
        int n=height.size();
        vector<int> res(n);
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.empty()  and height[st.top()] >= height[i])
                st.pop();
            
            if(st.empty())
                res[i]=n;
            else
                res[i]=st.top();
            
            st.push(i);
        }
        
        return res;
        
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> left=leftsmall(heights);
        vector<int> right=rightsmall(heights);
        int maxarea=0,w=0;
        
        for(auto i:right)
            cout<<i<<" ";
        
        for(int i=0;i<heights.size();i++){
            w=(right[i]-1) - (left[i]+1) + 1;
            maxarea= max(maxarea, w*heights[i]);
            
        }
        
        return maxarea;
        
        
        
    }
};
