#include <iostream>

using namespace std;

class List_ST{
private:
    string keys[1000];
    int values[1000];
    int n;    

    int find(string key){
        int i = 0;
        while(i < n && keys[i] < key) i++;
        return i;
    }

public:
    List_ST(){
        n = 0;
    }

    void put(string key, int value){
        int pos = find(key);
        
        //cap nhat gia tri value vs key da ton tai
        if(pos < n && keys[pos] == key){
            values[pos] = value;
            return;
        }

        //them key,value
        for(int i = n; i > pos; i--){
            keys[i] = keys[i - 1];
            values[i] = values[i - 1];
        }

        keys[pos] = key;
        values[pos] = value;
        n++;
    }

    int get(string key){
        int pos = find(key);
        if(pos < n && keys[pos] == key) return values[pos];
    }

    bool contains(string key){
        int pos = find(key);

        return pos < n && keys[pos] == key;
    }

    void remove(string key){
        int pos = find(key);
        if(pos < n && keys[pos] == key){
            for(int i = pos; i < n - 1; i++){
                keys[i] = keys[i + 1];
                values[i] = values[i + 1];
            }
            n--;
        }
    }
};
