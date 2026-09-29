#include <iostream>

using namespace std;

//ham tinh tong cac phan tu trong mang
long long tong(int a[][100], int n, int m){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
    }
    return sum;
}

//ham xoa hang thu i trong mang 
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