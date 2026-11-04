#include "list_hash.h"

class hash_open {
private:
    List table;

    int hash(int key) const {
        return ((key % N) + N) % N;
    }

public:
    //O(1) 
    void insert(int key) {
        int h = hash(key);
        table.insert(key, h);
    }

    //O(1) 
    bool search(int key) const {
        int h = hash(key);
        return table.search(key, h);
    }
};

#endif
