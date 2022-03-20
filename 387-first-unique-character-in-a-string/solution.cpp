// OJ--> https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> hash;
        
        for(auto i:s)
            hash[i]++;
        
        for(int i=0;i<s.size();i++){
            if(hash[s[i]] == 1)
                return i;
        }
        return -1;
    }
};