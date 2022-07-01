class Solution {
public:
    int longestPalindrome(string s) {
        int arr[256]={0};
        
        for(auto i:s)
            arr[i]++;
        
        int res=0;
        bool pickedSingle=true;
        
        for(int i=0;i<256;i++){
            if(arr[i]%2 == 0){
                res += arr[i];
            }
            else{
                if(arr[i]>1)
                    res+= arr[i]-1;
                
                if(pickedSingle){
                    res++;
                    pickedSingle = false;
                }
            }
        }
        return res;
    }
};