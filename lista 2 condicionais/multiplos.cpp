#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois inteiros: ";
    cin >> a >> b;
    if (a == 0 && b == 0) {
        cout << "Ambos zero - qualquer um pode ser considerado multiplo." << endl;
        return 0;
    }
    if (b != 0 && a % b == 0) cout << a << " e multiplo de " << b << endl;
    else if (a != 0 && b % a == 0) cout << b << " e multiplo de " << a << endl;
    else cout << "Nenhum e multiplo do outro." << endl;
    return 0;
}
