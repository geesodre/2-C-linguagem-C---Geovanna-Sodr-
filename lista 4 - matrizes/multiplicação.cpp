#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], c[2][2];
    cout << "Digite 4 elementos da primeira matriz 2x2:" << endl;
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) cin >> a[i][j];
    cout << "Digite 4 elementos da segunda matriz 2x2:" << endl;
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) cin >> b[i][j];
    for (int i=0;i<2;i++) for (int j=0;j<2;j++) {
        c[i][j] = 0;
        for (int k=0;k<2;k++) c[i][j] += a[i][k] * b[k][j];
    }
    cout << "Resultado da multiplicacao:" << endl;
    for (int i=0;i<2;i++) { for (int j=0;j<2;j++) cout << c[i][j] << " "; cout << endl; }
    return 0;
}
