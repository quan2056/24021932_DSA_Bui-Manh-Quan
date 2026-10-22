#include <linkedlist.h>

struct Queue{
    linkedlist a;

    //do phuc tap O(n)
    void enqueue(){
        a.addLast();
    }

    //do phuc tap O(1)
    int dequeue(){
        return a.rmFirst();
    }

    //do phuc tap O(1)
    int front(){
        return a.get();
    }

    //do phuc tap O(n)
    int size(){
        return a.size();
    }

    //do phuc tap O(1)
    bool isEmpty(){
        return a.isEmpty();
    }
};