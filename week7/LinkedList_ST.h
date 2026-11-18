#include <iostream>
#include <string>

using namespace std;

struct Node{
    string key;
    int value;
    Node* next;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head = nullptr;
    }

    void put(string key, int value){
        Node* p = head;
        while(p != nullptr){
            if(p->key == key){
                p->value = value;
                return;
            }
            p = p->next;
        }

        Node *q = new Node(key, value);
        q->next = p;
        head = q;
    }

    int get(string key){
        Node* p = head;
        while(p != nullptr){
            if(p->key = key) return p->value;

            p = p->next;
        }
    }

    bool contains(string key){
        Node* p = head;

        while(p != nullptr){
            if(p->key == key) return true;

            p = p->next;
        }
        return false;
    }

    void remove(string key){
        if(head == nullptr) return;
        if(head->key == key){
            Node* tmp = head;
            head = head->next;
            delete tmp;
            return;
        }

        Node* p = head;
        while(p->next != nullptr){
            if(p->next->key == key){
                Node* tmp = p;
                p = p->next;
                delete tmp;
                return;
            }
            p = p->next;
        }
    }
};
