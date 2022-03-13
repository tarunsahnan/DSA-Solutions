//Question Link --> https://leetcode.com/problems/reverse-bits/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        
        for (int i = 0; i < 32; i++, n >>= 1){
            res = res<<1;
            res=res | (n&1);
        }
        
        
        return res;
    }
};