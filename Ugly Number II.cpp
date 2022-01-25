// Question Link: https://leetcode.com/problems/ugly-number-ii/
/*
Ugly Number means the number whose prime factors are 2,3, and 5 only. We can also solve this problem using Bruteforce, but it will consume alot of time.
An efficient algorithm of O(n) Time complexity is that we can just multiply the previous number by 2,3, or 5.
*/

int nthUglyNumber(int n) {
        
        int x2=0,x3=0,x5=0,last;
        
        vector<int> s;
        s.push_back(1);
        while(s.size() != n){
            
            s.push_back(min(s[x2]*2,min(s[x3]*3,s[x5]*5)));
            
            last=s.back();
            
            if(last == s[x2]*2)    x2++;
            if(last == s[x3]*3)    x3++;
            if(last == s[x5]*5)    x5++;
            
        }
        return s.back();
        
    }
