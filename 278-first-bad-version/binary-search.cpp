//Question Link --> https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        unsigned int hi=n,lo=1,mid;
        
        while(hi > lo){
            
            mid=(hi + lo)/2;
            if(isBadVersion(mid)) hi=mid;
            else lo=mid+1;
            
        }
        return hi;
        
    }
};
