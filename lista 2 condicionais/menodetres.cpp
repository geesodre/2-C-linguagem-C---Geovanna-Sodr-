#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double num1, num2, num3;

    cout << "Digite tres numeros:";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << "Menor: " << num1 << endl;
    } else if (num2 <= num1 && num2 <= num3) {
        cout << "Menor: " << num2 << endl;
    } else {
        cout << "Menor: " << num3 << endl;
    }
    return 0;
}