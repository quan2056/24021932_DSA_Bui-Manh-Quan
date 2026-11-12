const int MAX = 10000;

class Array{
private:
    int a[MAX + 1];
    int n;
public:
    Array(){
        n = 0;
    }

    void swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }

    //max heap
    void swimMax(int k){
        while(k > 1 && a[k/2] < a[k]){
            swap(a[k/2], a[k]);
            k = k/2;
        }
    }

    void sinkMax(int k){
        while(2*k <= n){
            int j = 2*k;
            if(j < n && a[j] < a[j + 1]){
                j++;
            }
            if(a[j] <= a[k]) break;
            swap(a[j], a[k]);
            k = j;
        }
    }

    int delMax(){
        if(n == 0) return 0;
        int max = a[1];
        swap(a[1], a[n]);
        n--;
        sinkMax(1);
        return max;
    }

    void insertMax(int x){
        if(n == MAX) return;
        n++;
        a[n] = x;
        swimMax(n);
    }

    void buildMax(){
        for(int k = n/2; k >= 1; k--){
            sinkMax(k);
        }
    }

    //min heap
    void swimMin(int k){
        while(k > 1 && a[k/2] > a[k]){
            swap(a[k/2], a[k]);
            k = k/2;
        }
    }

    void sinkMin(int k){
        while(2*k <= n){
            int j = 2*k;
            if(j < n && a[j] > a[j+1]){
                j++;
            }
            if(a[k] <= a[j]) break;
            swap(a[j], a[k]);
            k = j;
        }
    }

    void insertMin(int x){
        if(n == MAX) return;
        n++;
        a[n] = x;
        swimMin(n);
    }

    int delMin(){
        if(n == 0) return 0;
        int min = a[1];
        swap(a[1], a[n]);
        n--;
        sinkMin(1);
        return min;
    }

    void buildMin(){
        for(int k = n/2; k >= 1; k--){
            sinkMin(k);
        }
    }

    int get(){
        if(n == 0) return 0;
        return a[1];
    }
};
