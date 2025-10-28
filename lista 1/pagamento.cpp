#include <iostream>
#include <string>
using namespace std;

int main(){
    string nome;
    double salario, pagamento;
    int horast;

    cout << "Nome do funcionário:";
    getline(cin, nome);
    cout << "Salário por hora:";
    cin >> salario;
    cout << "Horas trabalhadas no mês:";
    cin >> horast;
    pagamento = salario * horast;

    cout << "O pagamento para " << nome << "deve ser: R$ " << pagamento << endl;
    return 0;
}