#include "LinkedList.h"

class hashtable{
private:
    linkedlist* table;
    int n;

    int hash(int key){
        return ((key % n) + n) % n;
    }

public:
    hashtable(int size = 100){
        n = size;
        table = new linkedlist[n];
    }

    //them phan tu: O(1)
    void insert(int key){
        int h = hash(key);
        if(!table[h].search(key)){
            table[h].addFirst(key);
        }
    }

    //them phan tu: O(1)
    bool search(int key){
        int h = hash(key);
        return table[h].search(key);
    }

    ~hashtable(){
        delete[] table;
    }
};
