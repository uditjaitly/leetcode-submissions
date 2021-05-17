class LRUCache {
public:
    
    list<int> ls;
    map<int,pair<list<int>::iterator,int>> hm;
    int capacity;
    int count;
    
    LRUCache(int capacity) {
        this->capacity=capacity;
        this->count=0;
    }
    
    
    
    
    int get(int key) {
        if(hm.find(key)==hm.end()){
            return -1;
        }
        int temp=hm[key].second;
        ls.erase(hm[key].first);
        ls.push_front(key);
        hm[key].first=ls.begin();
        hm[key].second=temp;
        
        
        
        return temp;
    }
    
    void put(int key, int value) {
        if(hm.find(key)==hm.end() && count<capacity){
            ls.push_front(key);
            hm[key].first=ls.begin();
            hm[key].second=value;
            count++;
        }
        else if(hm.find(key)!=hm.end()){
            ls.erase(hm[key].first);
            ls.push_front(key);
            hm[key].first=ls.begin();
            hm[key].second=value;
        }
        else if(count>=capacity){
            hm.erase(ls.back());
            ls.pop_back();
            ls.push_front(key);
            hm[key].first=ls.begin();
            hm[key].second=value;
            
        }
    }
   
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */