#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int idade1, idade2;
    string nome1, nome2;

    cout << "Digite seu nome:\n";
    getline(cin, nome1);
    cout << "Digite sua idade:\n";
    cin >> idade1;

    cout << "Digite o nome da segunda pessoa:\n";
    cin.ignore();
    getline(cin, nome2);
    cout << "Digite a idade da segunda pessoa:\n";
    cin >> idade2;

    cout << fixed << setprecision(0);
    cout << "A idade de " << nome1 << " e " << idade1 << " anos.\n";
    cout << "A idade de " << nome2 << " e " << idade2 << " anos.\n";    
    return 0;
}