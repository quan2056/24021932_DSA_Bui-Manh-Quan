#include "List.h"

struct Queue{
    List a;

    //do phuc tap O(n)
    void enqueue(int x){
        a.addFirst(x);
    }

    //do phuc tap O(1)
    int dequeue(){
        return a.rmLast();
    }

    //do phuc tap O(1)
    int front(){
        return a.getLast();
    }

    //do phuc tap O(1)
    int size(){
        return a.size();
    }

    //do phuc tap O(1)
    bool isFull(){
        return a.isFull();
    }

    //do phuc tap O(1)
    bool isEmpty(){
        return a.isEmpty();
    }
};