class MyHashMap {
public:
    
    unordered_map<int,int> hash;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        hash[key]=value;
    }
    
    int get(int key) {
        if(hash.find(key) == hash.end())
                return -1;
    
        return hash[key];
    }
    
    void remove(int key) {
        hash.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */