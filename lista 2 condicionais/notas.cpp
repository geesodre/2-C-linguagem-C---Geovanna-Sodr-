#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double nota1, nota2, notaf;
    cout << "Qual a primeira nota do aluno ?";
    cin >> nota1;
    cout << "Qual a segunda nota  do aluno ?";
    cin >> nota2;
    notaf = (nota1 + nota2) / 2;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << notaf << endl;

    if (notaf > 60)
    {
        cout << "REPROVADO" << endl;
    }
    else
    {
        cout << "APROVADO" << endl;
    }
    return 0;    
}       