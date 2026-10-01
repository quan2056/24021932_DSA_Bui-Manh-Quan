#include <iostream>

using namespace std;

//ham tinh giai thua cua n
long long gt(int n){
    if(n == 0 || n == 1) return 1;
    return n * gt(n - 1);
}

int main(){
    int n;
    cin >> n;
    long long x = gt(n);
    cout << "n! = " << x;
    return 0;
}

/*
Phan tich do phuc tap thuat toan:
+ Theo thoi gian:
- Ham gt(n) la ham de quy, bi goi lap lai cho den khi n = 1 hoac 0.
- Moi lan ham duoc goi len deu chi thuc hien phep so sanh va phep nhan => do phuc tap O(1)
=> Voi truong hop tot nhat (n = 0 hoac n = 1 ngay tu dau): ham kiem tra ra dung dieu kien ngay lap tuc, nen do phuc tap la O(1).
=> Voi truong hop xau nhat, can su dung n thao tac de tinh het ham de quy => O(n).
=> Voi truong hop trung binh, tuong tu nhu truong hop tot nhat, do phuc tap la O(n)

+ Theo bo nho:
- Vi la ham de quy, nen moi khi goi lai ham nay, he thong lai phai luu them vao 1 o nho de giu trang thai cua bien va gia tri vua do duoc.
-  Voi truong hop tot nhat: n = 0 hoac n = 1, khi do chi can su dung 1 o nho.
 - Voi truong hop Xau nhat: ton n o nho de tinh duoc giai thua => O(n).
- Voi truong hop trung binh: O(n).
*/
