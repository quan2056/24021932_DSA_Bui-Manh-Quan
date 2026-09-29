#include <iostream>

using namespace std;

//ham hoan doi gia tri giua 2 so
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//ham sap xep mang a
void sapxep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]) min = j;
        }
        if(min != i) swap(a[i], a[min]);
    }
}

int main(){
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sapxep(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}