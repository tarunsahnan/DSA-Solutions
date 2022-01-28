//Question Link--> https://leetcode.com/problems/trapping-rain-water/

//References: https://www.geeksforgeeks.org/trapping-rain-water/

int trap(vector<int>& height) {
        
        int water=0,lo=0,hi=height.size()-1,lmaxx=INT_MIN,rmaxx=INT_MIN;
       
        while(lo<=hi){
            
            if(height[lo]<=height[hi]){
                
            if(height[lo]>lmaxx)
                lmaxx=height[lo];
                
            else
                water+=lmaxx-height[lo];
                
            lo++;
                
            }
            
            else{
                
                if(height[hi]>rmaxx)
                    rmaxx=height[hi];
                
                else
                    water+=rmaxx-height[hi];
                
                hi--;
                
            }
        }
                
        return water;
        
    }
