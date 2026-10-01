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

/*
Do phuc tap thuat toan:
+ Theo thoi gian:
- Ham swap: chi gom 3 phep gan co ban => do phuc tap O(1).
- Ham sapxep: vong lap ben ngoai thuc hien n lan. Voi moi gia tri i cua vong lap ben ngoai vong lap ben trong luon 
thuc hien so thao tac tu i+1 den n-1.
=> Tong so thao thac la (n-1) + (n-2) + ... + 1 = n*(n-1)/2 = n^2/2 - n/2
- Ma thuat toan khong co co che do ngat giua chung, nen ca 3 truong hop tot nhat, xau nhat, va trung binh deu co
do phuc tap thuat toan la O(n^2)

+ Theo bo nho:
- Cac thao tac sap xep chi thuc hien tren mang ban dau va chi su dung cac bien don le cung nhu mang co so phan tu
la hang so (1000) nen do phuc tap thuat toan theo bo nho khong thay doi theo n.
=> Do phuc tap thuat toan trong ca 3 truong hop xau nhat, tot nhat va trung binh la O(1).
*/
