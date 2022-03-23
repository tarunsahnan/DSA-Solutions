//OJ--> https://leetcode.com/problems/broken-calculator/

var brokenCalc = function(start, target) {
    
    if(start >= target)
        return start-target;
    
    if(target%2 === 0)
        return 1 + brokenCalc(start, target/2);
       
    return 1 + brokenCalc(start, target+1);
    
};