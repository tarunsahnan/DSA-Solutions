// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int hi=n,lo=1,mid;
        
        while(hi > lo){
            
            mid=lo + ((hi- lo)/2);
            if(isBadVersion(mid)) hi=mid;
            else lo=mid+1;
            
        }
        return hi;
        
    }
};