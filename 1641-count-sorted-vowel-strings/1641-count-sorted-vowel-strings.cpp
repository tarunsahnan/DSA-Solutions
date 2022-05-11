class Solution {
public:
    
    // chars arr[5] ={'a','e','i','o','u'};
    
    void helper(int& res, int n,int len,int i){
        
        len++;
        
        if(len == n){
            res++;
            return;
        }

        for(int k=i;k<5;k++)
            helper(res,n,len,k);
    }
    
    int countVowelStrings(int n) {
        int res=0;
        
        for(int i=0;i<5;i++)
            helper(res,n,0,i);
        
        return res;
        
    }
};
