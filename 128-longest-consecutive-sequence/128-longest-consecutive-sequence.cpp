class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        //edge case-> if array is empty
        if(nums.size()==0)
            return 0;
        
        int res=0;
        
        unordered_map<int,pair<int,bool>> hash;
        
        for(auto i:nums){
            
            if(hash[i].first == 0){
                
                //count of frequency
                hash[i].first++;
                
                //check is the value already visited basically it is for repeated values
                hash[i].second=false;
            }
            
            //for repeated values
            else
                hash[i].first++;
        }
        
        for(auto i:nums){
            
            //if value is not visited and finding the consecutively maximum value
            //if we are not finding consecutively maximum value then this solution gives TLE
            if(hash[i].second==false && hash[i+1].first==0){
                
                // make it visited
                hash[i].second=true;
                
                //variable for checking length
                int count=0;
                
                //traversing all the values which are consecutively smaller then the current value
                // and checking it its frequency is not zero
                while(hash[i].first){
                    count++; //increase the length by one
                    i=i-1;   //decrease the value by one so that we can now find consecutive smaller values
                }
                res=max(res,count); //storing maximum length
            }
        }
        return res;
    }
};