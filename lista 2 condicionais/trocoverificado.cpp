#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double preco, dinheiro;
    int quantidade;
    cout << "Preco unitario: ";
    cin >> preco;
    cout << "Quantidade: ";
    cin >> quantidade;
    cout << "Dinheiro dado: ";
    cin >> dinheiro;
    double total = preco * quantidade;
    cout << fixed << setprecision(2);
    if (dinheiro < total) {
        cout << "Dinheiro insuficiente. Faltam R$ " << (total - dinheiro) << endl;
    } else {
        cout << "Troco = R$ " << (dinheiro - total) << endl;
    }
    return 0;
}
