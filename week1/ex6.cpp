#include <iostream>

using namespace std;

/*
//cau a: ham xoa di phan tu o vi tri k
Phan tich do phuc tap thuat toan:
- Theo thoi gian:
Ham xoa() su dung vong lap for tu k den n - 1 nen:
+ Truong hop tot nhat: khi xoa o cuoi cua mang, vong lap chay 1 lan, vay nen do phuc tap la O(1)
+ Truong hop te nhat: khi xoa phan tu o dau tien cua mang, khi do vong lap phai chay n lan, do phuc tap la O(n)
+ Truong hop trung binh: O(n)
- Theo bo nho: O(n) do thao tac voi mang co huu han phan tu, cac bien don le.
*/
void xoa(int a[], int &n, int k){
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    }        
    n--;
}


/*
Cau b: ham chen them so y vao vi tri m trong mang
Phan tich do phuc tap thuat toan: 
- Theo thoi gian: Vong lap chay lui tu n ve vi tri m
+ Truong hop tot nhat: chen phan tu y vao vi tri cuoi cung cua mang, vong lap chi chay 1 lan => do phuc tap O(1)
+ Truong hop xau nhat: chen phan tu y vao vi tri dau tien cua mang, vong lap chay n lan => do phuc tap O(n)
+ Truong hop trung binh: O(n)
- Theo bo nho: Chi su dung cac bien don le, mang co su phan tu huu han, nen khong phu thuoc vao bien n, do phuc tap thuat toan O(1)
*/
void chen(int a[], int &n, int y, int m){
    for(int i = n; i > m; i--){
        a[i] = a[i - 1];  
    }
    a[m] = y;
    n++;
}

int main(){
    int n, k, y, m;
    cin >> n >> k >> y >> m;
    int a[10000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    xoa(a, n, k);
    cout << "Day sau khi xoa phan tu o vi tri " << k <<  " la: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    chen(a, n, y, m );
    cout << "Day sau khi them phan tu " << y << " vao vi tri thu " << m << " la : ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}

