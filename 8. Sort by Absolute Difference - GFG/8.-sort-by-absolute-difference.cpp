// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    


 

class mycompare
   {
       int k;
       public:
       mycompare(int n)
       {
           k = n;
       }
       bool operator()(int a,int b)
       {
           return (abs(a-k)<abs(b-k));
       }
   };
    
    void sortABS(int A[],int N, int k)
    {
       stable_sort(A,A+N,mycompare(k));
    }

};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    Solution ob;
	   
	    ob.sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends