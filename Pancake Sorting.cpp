//Question Link --> https://leetcode.com/problems/pancake-sorting/

class Solution {
public:
    
    void flip(vector<int>& arr,int n){
        reverse(arr.begin(),arr.begin()+n+1);
    }
    
    int maxelement(vector<int>& arr,int& n){
        int maxi=0;
        for(int i=0;i<n;i++){
            if(arr[i] > arr[maxi]){
                maxi=i;
        }
        }
        return maxi;
    }
    vector<int> pancakeSort(vector<int>& arr) {
        
        vector<int> v;
        
        if(is_sorted(arr.begin(),arr.end()))
            return v;
    
        for(int i=arr.size();i>0;i--){
            
            int maxi=maxelement(arr,i);    
            
            if(maxi != i-1){
                flip(arr,maxi);
                flip(arr,i-1);
                v.push_back(maxi+1);
                v.push_back(i);
                
            }
        
        }
        
        for(auto i:arr)
            cout<<i;
        
        return v;
    }
};
