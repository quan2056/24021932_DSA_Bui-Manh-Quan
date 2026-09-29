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