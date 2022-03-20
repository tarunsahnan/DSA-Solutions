//OJ --> https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
     
        vector<int> hash(26,0);
        
        for(auto i:s)
            hash[i-'a']++;
        
        for(auto i:t)
            hash[i-'a']--;
        
        for(auto i:hash)
            if(i != 0)
                return false;
        
        return true;
        
    }
};