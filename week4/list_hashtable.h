class List {
public:
    static const int N = 100;

private:
    int a[N];
    bool used[N];

public:
    List() {
        for (int i = 0; i < N; i++) {
            used[i] = false;
        }
    }

    //them phan tu: O(n)
    void insert(int key, int h) {
        for (int i = 0; i < N; i++) {
            int pos = (h + i) % N;

            if (!used[pos]) {
                a[pos] = key;
                used[pos] = true;
                return;
        }

            if (a[pos] == key) return;
        }
    }

    //tim kiem: O(n)
    bool search(int key, int h) const {
        for (int i = 0; i < N; i++) {
            int pos = (h + i) % N;

            if (!used[pos]) return false;
            if (a[pos] == key) return true;
        }

        return false;
    }
};
