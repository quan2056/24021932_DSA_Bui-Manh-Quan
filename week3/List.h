int const MAX = 10000;
class List{
    private:
    int a[MAX];
    int n;

    public:
    List(){
        n = 0;
    }
    
    //O(1)
    void addLast(int x){
        if(n == MAX) return;

        a[n] = x;
        n++;
    }

    //O(n)
    void addFirst(int x){
        for(int i = n; i > 0; i--){
            a[i] = a[i - 1];
        }
        a[0] = x;
        n++;
    }

    //O(1)
    int rmLast(){
        if(n == 0) return 0;
        int val = a[n - 1];
        n--;
        return val;
    }

    //O(n)
    int rmFirst(){
        if(n == 0) return 0;
        int val = a[0];
        for(int i = 0; i < n - 1; i++){
            a[i] = a[i+1];
        }
        n--;
        return val;
    }

    //O(1)
    int getFirst(){
        return a[0];
    }

    //O(1)
    int getLast(){
        return a[n-1];
    }

    //O(1)
    int size(){
        return n;
    }

    //O(1)
    bool isEmpty(){
        return n == 0;
    }

    //O(1)
    bool isFull(){
        return n == MAX;
    }
}
