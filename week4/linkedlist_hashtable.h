struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

class linkedlist {
private:
    Node* head;

public:
    linkedlist() {
        head = nullptr;
    }

    ~linkedlist() {
        while (head != nullptr) {
            Node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    // Them vao dau - O(1)
    void addFirst(int x) {
        Node* p = new Node(x);
        p->next = head;
        head = p;
    }

    // Kiem tra phan tu x co ton tai - O(n)
    bool get(int x) const {
        Node* p = head;

        while (p != nullptr) {
            if (p->data == x)
                return true;

            p = p->next;
        }

        return false;
    }

    bool isEmpty() const {
        return head == nullptr;
    }
};

#endif
