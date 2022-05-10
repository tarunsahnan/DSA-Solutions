class Solution {
public:
    
    static bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() == 1) return 0;
        
        sort(intervals.begin(),intervals.end(),comp);
        
        int res=0;
        
        vector<int> temp;
        temp = intervals[0];
        
        for(int i=1;i<intervals.size();i++){
            
            auto second = temp;
            
            if(intervals[i][0] < second[1]){
                res++;
            }
            else{
                temp=intervals[i];
            }
            
            
        }
        
        return res;
        
    }
};