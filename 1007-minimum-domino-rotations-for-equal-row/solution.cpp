//OJ --> https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/

class Solution {
public:
    int top[7],bottom[7],same[7];
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        for(int i=0;i<tops.size();i++){
            
            top[tops[i]]++;
            bottom[bottoms[i]]++;
            
            if(tops[i] == bottoms[i])
                same[tops[i]]++;
        }
        
        
        for(int i=1;i<7;i++){
            
            if(top[i]+bottom[i]-same[i] == tops.size())
                return tops.size() - max(top[i],bottom[i]);
            
        }
        return -1;
        
    }
};