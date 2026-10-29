class List {
private:
    static const int MAX = 10000;
    int a[MAX];
    int n;

public:
    List() {
        n = 0;
    }

    // Them phan tu vao cuoi - O(1)
    void add(int x) {
        if (n == MAX) return;

        a[n] = x;
        n++;
    }

    // Lay hoac thay doi phan tu tai vi tri i - O(1)
    int& get(int i) {
        return a[i];
    }

    // Lay phan tu khi doi tuong la const - O(1)
    const int& get(int i) const {
        return a[i];
    }

    // So phan tu - O(1)
    int size() const {
        return n;
    }

    // Kiem tra rong - O(1)
    bool isEmpty() const {
        return n == 0;
    }

    // Kiem tra day - O(1)
    bool isFull() const {
        return n == MAX;
    }
};
