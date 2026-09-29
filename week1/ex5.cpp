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