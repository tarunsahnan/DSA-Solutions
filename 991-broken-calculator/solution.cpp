//OJ--> https://leetcode.com/problems/broken-calculator/

class Solution {
public:
        
    int brokenCalc(int start, int target) {
        
        
        
        if(target <= start){
            return start-target;
        }
        
        if(target %2 == 0)
            return 1 + brokenCalc(start, target/2);
        
        return 1+ brokenCalc(start, target+1);
        
    }
};