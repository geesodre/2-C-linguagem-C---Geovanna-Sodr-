#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Medidas das tres tentativas: ";
    cin >> a >> b >> c;
    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    cout << fixed << setprecision(2);
    cout << "Maior lancamento = " << maior << endl;
    return 0;
}
