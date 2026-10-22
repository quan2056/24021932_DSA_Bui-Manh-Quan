struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
}; //O(1)

class linkedlist{
    private:
    Node* head;

    public:
    //do phuc tap O(1)
    linkedlist(){
        head = nullptr;
    }

    //do phuc tap O(n)
    ~linkedlist(){
        while(head != nullptr){
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    //do phuc tap O(1)
    void addFirst(int x){
        Node* p = new Node(x);
        p->next = head;
        head = p;
    }

    //do phuc tap O(1)
    int rmFirst(){
        if(head == nullptr) return 0;
        Node* tmp = head;
        int val = tmp->data;
        head = head->next;
        delete tmp;
        return val;
    }

    //do phuc tap O(n)
    void addLast(int x){
        Node* p = new Node(x);
        if(head == nullptr){
            head = p;
            return;
        }

        Node* tmp = head;
        while(tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = p;
    }

    //do phuc tap O(n)
    int rmLast(){
        if(head == nullptr) return 0;

        if(head->next == nullptr){
            Node* p = head;
            int val = p->data;
            head = head->next;
            delete p;
            return val;
        }
        
        Node* tmp = head;
        while(tmp->next->next != nullptr){
            tmp = tmp->next;
        }

        Node* q = tmp->next;
        int value =  q->data;
        tmp->next = nullptr;
        delete q;
        return value;
    }

    //do phuc tap O(1)
    int get(){
        if(head == nullptr) return 0;
        return head->data;
    }

    //do phuc tap O(1)
    bool isEmpty(){
        return head == nullptr;
    }

    //do phuc tap O(n)
    int size(){
        int cnt = 0;
        Node* tmp = head;
        while(tmp != nullptr){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }    
};
