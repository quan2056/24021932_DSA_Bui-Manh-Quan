#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << "Tong cac phan tu trong day la: " << sum;
    return 0;
}

/*
Danh gia do phuc tap thuat toan: 
Theo thoi gian:
- Cac thao thac co ban nhu tao, nhap bien, xuat ket qua, ... co do phuc tap O(1).
- Vong lap for chay n lan, moi vong lap thuc hien 1 lan nhap du lieu cin va 1 phep cong, moi thao thac co do phuc tap O(1).
- Chuong trinh khong co dieu kien dung giua chung nen o ca 3 truong hop tot nhat, trung binh, xau nhat doan code deu co do phuc tap O(n).
Theo bo nho: mang a[1000] va cac bien n, sum, i deu co dung luong la 1 hang so, khong tang theo n.
=> Do phuc tap thuat toan la O(1) do khong phu thuoc vao n.
*/
