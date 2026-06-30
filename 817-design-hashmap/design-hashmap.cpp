class MyHashMap {
    vector<list<pair<int,int>>> map;
    int size;
public:
    MyHashMap():size(1e4+1){
        map.resize(size);
    }
    
    void put(int key, int value) {
        int map_idx = key % size;
        auto& chain = map[map_idx];
        for(auto& it: chain){
            if(it.first == key){
                it.second = value;
                return;
            }
        }
        chain.emplace_back(key,value);
    }
    
    int get(int key) {
        int map_idx = key % size;
        auto& chain = map[map_idx];
        for(auto& it: chain){
            if(it.first == key){
                return it.second;
            }
        }
        return -1;

    }
    
    void remove(int key) {
        int map_idx = key % size;
        auto& chain = map[map_idx];
        for(auto it = chain.begin(); it != chain.end(); it++){   // only pointers can access and delete a node //
            if(it->first == key){
                chain.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */