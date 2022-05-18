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
    let i = 0;
    for(;i<t;i++)
    {
        let num = parseInt(readLine());
        let arr = new Array(num);
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<num;i++)
            arr[i] = input_ar1[i];
        let obj = new Solution();
        if(obj.checkRotatedAndSorted(arr, num)){
            console.log("Yes");
        }
        else{
            console.log("No");
        }
        
    }
}// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} num
 * @returns {boolean}
*/

class Solution {
    //Function to check if array is sorted and rotated.
    
        checkRotatedAndSorted(arr, num)
    {
        // code here
     let n = arr.length
    let min = Number.MAX_VALUE
    let res = 0
    for(let i=0;i<n;i++){
        if(arr[i]<min)
        {
            min = arr[i];
            res = i
        }
    }
    //console.log(min,res)
    let flag1 = true
    let flag2 = true
    let flag3 = true
    let flag4 = true


    
    for(let j=1;j<res;j++){
        if(arr[j-1] > arr[j]){
            flag1 = false
            break;
        }
    }

    for(let j=1;j<res;j++){
        if(arr[j-1] < arr[j]){
            flag3 = false;
            break;
        }
    }

    for(let k=res+1;k<n;k++){
        if(arr[k-1] > arr[k]){
            flag2 = false;
            break;
        }
    }

    for(let k=res+1;k<n;k++){
        if(arr[k] < arr[k+1]){
            flag4 = false;
            break;
        }
    }

    //console.log(flag1,flag2,flag3,flag4);
    if(flag1===true && flag2===true && arr[n-1]<arr[0]){
        return true
    
    }else if(flag3===true && flag4===true && arr[n-1]>arr[0]){
        return true
    }else{
        return false
    }
    }
}