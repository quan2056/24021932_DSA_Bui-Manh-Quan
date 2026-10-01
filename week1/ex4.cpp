#include <iostream>
#include <cmath>

using namespace std;

//ham tim uoc chung lon nhat cua 2 so a va b
int ucln(int a, int b){
    int r;
    a = abs(a);
    b = abs(b);
    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//ham rut gon phan so
void rutgon(int &a, int &b){
    int x = ucln(a, b);
    a /= x;
    b /= x;
    if(b < 0){
        a = -a;
        b = -b;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    rutgon(a, b);
    cout << "phan so a/b sau khi rut gon la: " << a << "/" << b;
    return 0;
}

/*
Phan tich do phuc tap thuat toan:
- Theo thoi gian: 
+ ham rutgon chi gom 1 lan goi ham ucln(a, b) va thuc hien cac phep so sanh, chia, gan gia tri don gian co do phuc tap O(1)
=> thoi gian chay cua ham phu thuoc vao ham ucln(a, b)
=> Ham ucln tim uoc chung lon nhat su dung thuat toan Euclid, phep chia lay du r = a % b lam gia tri cua b giam it nhat 1 nua 
sau moi 2 buoc lap lien tiep
*/
