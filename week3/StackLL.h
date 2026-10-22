//Cai dat stack bang linked list
#include "LinkedList.h"

struct Stack{
    linkedlist a;

    //do phuc tap O(1)
    void push(int x){
        a.addFirst(x);
    }

    //do phuc tap O(1)
    int pop(){
        return a.rmFirst();
    }

    //do phuc tap O(1)
    int top(){
        return a.get();
    }

    //do phuc tap O(1)
    bool isEmpty(){
        return a.isEmpty();
    }

    //do phuc tap O(n)
    int size(){
        return a.size();
    }
};