//OJ --> https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
     
        int n=height.size();
        int left=0,right=n-1;
        int area=0;
        while(left<right){
            area=max(area,min(height[left],height[right]) * (right-left));
    
            if(height[left] > height[right])
                right--;
            else
                left++;
        }
        return area;
        
    }
};