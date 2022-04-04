//OJ --> https://leetcode.com/problems/lru-cache/

class LRUCache {

    int capacity,size;
    unordered_map<int,pair<int,list<int>::iterator>> cache;
    list<int> order;
    
    public:
    LRUCache(int cap) {
        capacity=cap;
        size=0;
    }
    
    int get(int key) {
        
        if(cache.find(key) != cache.end()){
            order.erase(cache[key].second);
            order.push_front(key);
            cache[key].second = order.begin();
            return cache[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            order.erase(cache[key].second);
            order.push_front(key);
            cache[key]={value,order.begin()};
        }
        else{
            size++;
            order.push_front(key);
            cache[key] = {value,order.begin()};
        }
        
        if(size > capacity){
            size--;
            cache.erase(order.back());
            order.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */