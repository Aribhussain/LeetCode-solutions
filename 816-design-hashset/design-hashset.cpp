class MyHashSet {
    vector<list<int>> map;
    int size;
    int get_idx(int key){
        return key % size;
    }
public:
    MyHashSet(): size(1e4+1) {
        map.resize(size);
    }
    
    void add(int key) {
        int idx = get_idx(key);
        auto& hash_list = map[idx];
        auto itr = find(hash_list.begin(), hash_list.end(), key);
        if(itr == hash_list.end()){
            hash_list.push_back(key);
        }
    }
    
    void remove(int key) {
        int idx = get_idx(key);
        auto& hash_list = map[idx];
        auto itr = find(hash_list.begin(), hash_list.end(), key);
        if(itr != hash_list.end()){
            hash_list.remove(key);
        }
    }
    
    bool contains(int key) {
        int idx = get_idx(key);
        auto& hash_list = map[idx];
        auto itr = find(hash_list.begin(), hash_list.end(), key);
        if(itr != hash_list.end())
            return true;
        else
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */