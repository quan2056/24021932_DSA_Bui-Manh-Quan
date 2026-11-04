struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

class linkedlist{
private: 
    Node* head;

public:
    linkedlist(){
        head = nullptr;
    }

    void addFirst(int x){
        Node* p = new Node(x);
        p->next = head;
        head = p;
    }

    bool search(int x){
        Node* q = head;
        while(q != nullptr){
            if(q->data == x) return true;
            q = q->next;
        }
        return false;
    }
};
