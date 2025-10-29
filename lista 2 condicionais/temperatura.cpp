#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char escala;
    double temp;
    cout << "Digite escala (C ou F) e a temperatura: ";
    cin >> escala >> temp;
    cout << fixed << setprecision(2);
    if (escala == 'C' || escala == 'c') {
        double f = (temp * 9.0/5.0) + 32.0;
        cout << "F = " << f << endl;
    } else if (escala == 'F' || escala == 'f') {
        double c = (5.0/9.0) * (temp - 32.0);
        cout << "C = " << c << endl;
    } else {
        cout << "Escala invalida." << endl;
    }
    return 0;
}
