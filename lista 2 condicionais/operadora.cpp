#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double minutos, valor;

    cout << "Digite a quantidade de minutos excedidos: ";
    cin >> minutos;

    if (minutos > 100)
    {
        valor = 50 + (minutos - 100) * 2;
    }
    else
    {
        valor = 50;
    }
    cout << fixed << setprecision(2);
    cout << "Valor da conta: R$ " << valor << endl;
    return 0;
}