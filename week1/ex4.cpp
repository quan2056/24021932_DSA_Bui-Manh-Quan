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