#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double A, B , C, aquadrado, atriangulo, atrapezio;

    cout << "Digite o valor de A:";
    cin >> A;
    cout << "Digite o valor de B:";
    cin >> B;
    cout << "Digite o valor de C:";
    cin >> C;

    aquadrado = A * A;
    atriangulo = (A * C) / 2.0;
    atrapezio = ((A + B) * C) / 2.0;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado: " << aquadrado << endl;
    cout << "Area do triangulo: " << atriangulo << endl;
    cout << "Area do trapezio: " << atrapezio << endl;
    return 0;
}