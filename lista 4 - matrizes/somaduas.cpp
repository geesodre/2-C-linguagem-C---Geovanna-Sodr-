#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], c[3][3];
    cout << "Digite 9 elementos da primeira matriz 3x3:" << endl;
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> a[i][j];
    cout << "Digite 9 elementos da segunda matriz 3x3:" << endl;
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) cin >> b[i][j];
    for (int i=0;i<3;i++) for (int j=0;j<3;j++) c[i][j] = a[i][j] + b[i][j];
    cout << "Resultado da soma:" << endl;
    for (int i=0;i<3;i++) { for (int j=0;j<3;j++) cout << c[i][j] << " "; cout << endl; }
    return 0;
}
