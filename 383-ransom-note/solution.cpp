//OJ --> https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> hash;
        
        for(auto i:mag)
            hash[i]++;
        
        for(auto i:ran){
            if(hash.find(i) == hash.end() or hash[i] < 1)
                return false;
            
            hash[i]--;
        }
        return true;
    }
};