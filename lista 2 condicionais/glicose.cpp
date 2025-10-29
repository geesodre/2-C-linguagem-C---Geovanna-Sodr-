#include <iostream>
using namespace std;

int main() {
    double g;
    cout << "Valor de glicose (mg/dl): ";
    cin >> g;
    if (g <= 100.0) cout << "Normal" << endl;
    else if (g <= 140.0) cout << "Elevado" << endl;
    else cout << "Diabetes" << endl;
    return 0;
}
