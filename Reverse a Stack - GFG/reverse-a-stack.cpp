// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void insert(stack<int>&s,int n)
    {
        s.push(n);
    }
    void rever(stack<int>&s)
    {
        if(s.empty())
        {
            return;
        }
        int n=s.top();
        s.pop();
        rever(s);
        insert(s,n);
    }
    vector<int> Reverse(stack<int> St){
        rever(St);
        vector<int>v;
        while(!St.empty())
        {
            v.push_back(St.top());
            St.pop();
        }
        return v;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends