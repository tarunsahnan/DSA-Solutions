class Solution {
public:
    
    class mycmp{
        public:
        bool operator()(pair<int,int> a, pair<int,int> b ){
            double distanceA= sqrt((a.first*a.first)+(a.second*a.second));
            double distanceB= sqrt((b.first*b.first)+(b.second*b.second));
            
            return distanceA < distanceB;
        }
    };
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>, mycmp> pq;
        vector<vector<int>> res;
        
        for(auto i:points){
            pq.push(make_pair(i[0],i[1]));
            
            if(pq.size() > k)
                pq.pop();
        }
        while(!pq.empty()){
            auto temp=pq.top();pq.pop();
            vector<int> tempVec;
            tempVec.push_back(temp.first);
                        tempVec.push_back(temp.second);

            res.push_back(tempVec);
            
        }
        return res;
    }
};