#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double largura, comprimento, valor, area, custo;

    cout << "Qual a largura do terreno? ";
    cin >> largura;
    cout << "Qual o comprimento do terreno? ";
    cin >> comprimento;
    cout << "Qual o valor do metro quadrado? ";
    cin >> valor;

    area = largura * comprimento;
    custo = valor * area;

    cout << fixed << setprecision(0);
    cout << "\n O terreno possui area de " << area << "m e custa " << custo << endl;

    return 0;
}