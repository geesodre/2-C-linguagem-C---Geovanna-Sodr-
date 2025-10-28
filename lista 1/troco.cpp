#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double preco, dinheiro, troco, quant;
    
    cout << "Digite o preco do produto: ";
    cin >> preco;
    cout << "Digite a quantidade comprada: ";
    cin >> quant;
    cout << "Digite o valor em dinheiro dado pelo cliente: ";
    cin >> dinheiro;

    troco = dinheiro - (preco * quant);

    cout << fixed << setprecision(2);
    cout << "O troco do cliente e: R$ " << troco << endl;

    return 0;
}