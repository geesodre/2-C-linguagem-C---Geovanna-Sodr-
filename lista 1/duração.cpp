#include <iomanip>
#include<iostream>
using namespace std;

int main(){
    double horas, minutos, segundos, duracao;

    cout << "Digite a duracao em segundos:";
    cin >> duracao;
    horas = duracao / 3600;
    minutos = (duracao - (horas * 3600))/60;
    segundos = duracao - (horas * 3600) - (minutos * 60);

    cout << fixed << setprecision(2);
    cout << "horas:" << horas << endl;
    cout << "minutos:"<< minutos << endl;
    cout << "segundos:" << segundos << endl;
    return 0;
}