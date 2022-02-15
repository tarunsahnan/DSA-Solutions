//Question Link --> https://leetcode.com/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_all=0;
        
       for(auto i:nums) xor_all ^= i;
        
        int f=0,s,temp;
        
        //find set bit
        for(int i=0;i<32;i++){
            if(xor_all & (1<<i)) {temp=i;break;}
        }
               
        for(auto i:nums){
            if( i & (1<<temp)) f^=i;
        }
               
        s=f^xor_all;
               
        return {f,s};
        
    }
};
