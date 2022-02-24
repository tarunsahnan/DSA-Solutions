//Question Link --> https://leetcode.com/problems/find-median-from-data-stream/

class MedianFinder {
public:
    
    priority_queue<int> pq1; //max
    priority_queue<int,vector<int>,greater<int>> pq2; //min

    MedianFinder() {
    }
    
    void addNum(int num) {
        
       if(pq1.empty() || pq1.top() > num)
            pq1.push(num);
        else 
           pq2.push(num);
        
        
        
        if(pq1.size()  > 1 + pq2.size()){
            int temp=pq1.top();
            pq1.pop();
            pq2.push(temp);
            
        }
        else if(pq2.size()  > 1 + pq1.size()) {
            pq1.push(pq2.top());
            pq2.pop();
            
        }
        
        
    }
    
    double findMedian() {
        
         if(pq1.size() == pq2.size()) {
            if(pq1.empty()) return 0;
            return (pq1.top() + pq2.top())/2.0;
        }
        return pq1.size() > pq2.size() ? pq1.top() : pq2.top();
        
    }
};
