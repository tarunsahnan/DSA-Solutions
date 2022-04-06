//OJ --> https://leetcode.com/problems/3sum-with-multiplicity/

class Solution {
public:
    int Mod= 1e9 +7;
    int threeSumMulti(vector<int>& arr, int target) {
        
        
        long count[101]={0};
        for(auto i:arr)
            count[i]++;
        long long res=0;
        
        for(int i=0;i<101;i++){
            for(int j=i;j<101;j++){
                int k=target-i-j;
                if(k<0 || k>100)       continue;
                
                if(i==j and j==k)
                    res += (count[i]*(count[i]-1)*(count[i]-2))/6;
                else if(i==j and j!= k)
                    res += (count[i]*(count[i]-1))/2  * count[k];
                else if(i<j and j<k)
                    res += count[i]*count[j]*count[k];
            }
        }
        res%=Mod;
        return (int)res;
    }
};