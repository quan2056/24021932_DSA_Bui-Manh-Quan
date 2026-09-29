#include <iostream>

using namespace std;

//ham xoa di so thu k trong mang
void xoa(int a[], int &n, int k){
    for(int i = k; i < n - 1; i++){
        a[i] = a[i + 1];
    }        
    n--;
}

//ham chen them so y vao vi tri m trong mang
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