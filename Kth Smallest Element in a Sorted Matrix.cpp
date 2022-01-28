//Question Link--> https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

int kthSmallest(vector<vector<int>>& matrix, int k) {
           
        multiset<int> s;
        for(auto i:matrix)
            s.insert(i.begin(),i.end());
        
        auto it=s.begin();
        it= next(it,k-1);
        return *it;
    }
