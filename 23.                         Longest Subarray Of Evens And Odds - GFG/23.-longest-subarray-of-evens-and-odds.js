// { Driver Code Starts
//Initial Template for javascript
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function main() {
    let t = parseInt(readLine());
    for(let i=0;i<t;i++)
    {
        let input_line = readLine().split(' ');
        let N = parseInt(input_line[0]);
        input_line = readLine().split(' ').map(x=>parseInt(x));
        let arr = new Array(N);
        for(let i=0;i<N;i++){
            arr[i]=input_line[i];
        }
        let obj = new Solution();
        let ans = obj.maxEvenOdd(arr, N);
        if(ans==-0)
            ans=0;
        console.log(ans);
    }
}// } Driver Code Ends


//User function Template for javascript

/**
 * @param {[number[]} arr
 * @param {number} N
 * @returns {number} 
*/
class Solution {
    //Function to find the length of longest subarray of even and odd numbers.
    isEvenOdd(cur,next){
        return cur%2!==next%2;
        
    }
    //Function to find the length of longest subarray of even and odd numbers.
    maxEvenOdd(arr, N){
        // code here 
        let max=1;
        let curMax=1;
        
        for(let i=0;i<N-1;i++){
            if(this.isEvenOdd(arr[i],arr[i+1])){
                curMax++
            }else{
                curMax=1;
            }
            
            max=Math.max(max,curMax);
            
        }
            return max
        
        
        
    } 
}