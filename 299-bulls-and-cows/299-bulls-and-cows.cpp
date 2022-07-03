class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0;
        unordered_map<int,int> hash;
        string new2="";
        for(int i=0;i<secret.size();i++){
            if(secret[i] == guess[i])
                bulls++;
            else{
                hash[secret[i]]++;
                new2+= guess[i];
                cout<<new2;
            }

        }
        int cows=0;
        for(auto i:new2){
            if(hash.find(i) != hash.end()){
                if(hash[i] > 0){
                    cows++;
                    hash[i]--;
                }
            }
        }
        string res = to_string(bulls)+"A"+to_string(cows)+"B";
        return res;    };
};