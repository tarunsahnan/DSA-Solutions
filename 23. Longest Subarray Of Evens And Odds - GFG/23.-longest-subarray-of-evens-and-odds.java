// { Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.io.*;
import java.lang.*;

class Driver
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        
        //testcases
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            //size of array
            int n = Integer.parseInt(read.readLine());
            String str[] = read.readLine().trim().split(" ");
            int arr[] = new int[n];
            
            //inserting elements in the array
            for(int i = 0; i < n; i++)
                arr[i] = Integer.parseInt(str[i]);
            //calling function    
            System.out.println(new Solution().maxEvenOdd(arr, n));
            
        }
    }
}   // } Driver Code Ends


//User function Template for Java

// User class to complete  
class Solution
{
    // arr[]: input array
    // n: size of array
    //Function to find the length of longest subarray of even and odd numbers.
    public static int maxEvenOdd(int arr[], int n)
    {
        int count = 1, max = 1;
        for (int i=0; i<n-1; i++) {
            if (arr[i]%2 != arr[i+1]%2) {
                count++;
                max = Math.max(max, count);
            } else {
                count = 1;
            }
        }
        return max;
    }
}