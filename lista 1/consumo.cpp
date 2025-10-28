#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    double distancia, consumo, litros;

    cout << "Digite a distancia percorrida em km:";
    cin >> distancia;
    cout << "Digite o consumo medio em km/l:";
    cin >> consumo;
    litros = distancia / consumo;

    cout << fixed << setprecision(2);
    cout << "Litros consumidos: " << litros << " l" << endl;
    return 0;
}