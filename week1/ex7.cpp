#include <iostream>

using namespace std;

/*
Cau a: ham tinh tong cac phan tu trong mang
Do phuc tap thuat toan:
- Theo thoi gian: Vong lap trong ham duyet qua n hang, m cot => Do phuc tap O(n*m) cho tat ca truong hop
- Theo bo nho: chi su dung cac bien don le nhu sum, n, m va mang 2 chieu co kich thuoc huu han, nen do phuc tap la O(1)
*/
long long tong(int a[][100], int n, int m){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }
    return sum;
}

/*
Cau a: ham xoa hang thu i trong mang 
Do phuc tap thuat toan:
- Theo thoi gian: 
+ Truong hop tot nhat: xoa hang o cuoi cung cua mang, vong lap khong can chay, do phuc tap O(1)
+ Truong hop xau nhat: xoa hang o dau tien: phai lap lai qua trinh dich hang len n - 1 lan, moi hang co m phan tu => do phuc tap O(n*m)
+ Truong hop trung binh: xoa 1 hang bat ky o giua, do phuc tap la O(n*m)
- Theo bo nho: chi su dung cac bien don le nhu n, m va mang 2 chieu co kich thuoc huu han, nen do phuc tap la O(1)
*/

void xoa(int a[][100], int &n, int m, int i){
    for(int j = i; j < n - 1; j++){
        for(int q = 0; q < m; q++){
            a[j][q] = a[j + 1][q];
        }
    }
    n--;
}

int main(){
    int n, m, i;
    cin >> n >> m >> i;
    int a[100][100];
    for(int j = 0; j < n; j++){
        for(int q = 0; q < m; q++){
            cin >> a[j][q];
        }
    }
    cout << "Tong cac phan tu trong mang la: " << tong(a, n, m) << endl;
    xoa(a, n, m, i);
    cout << "Mang sau khi xoa di hang thu " << i << " la: " << endl;
    for(int j = 0; j < n; j++){
        for(int q = 0; q < m; q++){
            cout << a[j][q] << " ";
        }
        cout << "\n";
    }
    return 0;
}
