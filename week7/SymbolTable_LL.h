#include "LinkedList_ST.h"
#include <string>

class SymbolTable_LL {
private:
    LinkedList data;

public:
    void put(string key, int value) {
        data.put(key, value);
    }

    int get(string key) {
        return data.get(key);
    }

    bool contains(string key) {
        return data.contains(key);
    }

    void deleteKey(string key) {
        data.remove(key);
    }
};
