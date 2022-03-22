//OJ-> https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/

/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */
 var getSmallestString = function(n, k) {
    
    let arr=[], res='',val=0;
    
    for(let i=1;i<=26;i++){
        arr[i]=String.fromCharCode(96+i);
    }
    
    for(let i=n;i>0;i--){
        val=k-(i-1);
        
        if(val >= 26){
            res = arr[26] + res;
            k=k-26;
        }
        
        else{
            res = arr[val]+res;
            k=k-val;
        }
        
    }
    return res;
};