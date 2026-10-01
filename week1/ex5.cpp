#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double a[10000], sum = 0, avg;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    avg = sum/n; 
    cout << "Nhung gia tri lon hon hoac bang gia tri trung binh cua day la: ";
    for(int i = 0; i < n; i++){
        if(a[i] >= avg){
            cout << a[i] << " ";
        }
    }
    return 0;    
}

/*
Phan tich do phuc tap thuat toan: 
- Theo thoi gian:
+ Moi thao tac co ban nhu tao, nhap gia tri cho bien tuong duong voi thuc hien 1 thao tac => Do phuc tap O(1)
+ Vong lap 1 thuc hien phep lap n lan => Do phuc tap O(n)
+ Vong lap 2 thuc hien phep lap n lan => Do phuc tap O(n)
=> Ca 2 vong lap deu duyet du n phan tu roi moi dung lai, khong phu thuoc vao gia tri cua n
=> Voi truong hop tot nhat, xau nhat, hay trung binh deu co do phuc tap thuat toan la O(n).

- Theo bo nho: Do chi su dung cac bien don le va mang co so luong phan tu co dinh, khong phu thuoc vao n
=> Do phuc tap O(1) voi ca 3 truong hop.
*/
