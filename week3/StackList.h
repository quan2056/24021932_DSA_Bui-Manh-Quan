//Cai dat stack bang list
#include "List.h"

struct Stack{
    List a;

    //do phuc tap O(1)
    void push(int x){
        a.addLast(x);
    }

    //do phuc tap O(1)
    int pop(){
        return a.rmLast();
    }

    //do phuc tap O(1)
    int rmLast(){
        return a.getLast();
    }

    //do phuc tap O(1)
    bool isEmpty(){
        return a.isEmpty();
    }

    //do phuc tap O(1)
    bool isFull(){
        return a.isFull();
    }

    //do phuc tap O(1)
    int size(){
        return a.size();
    }
};