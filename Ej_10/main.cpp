//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

void numeros(int a) {
    if (a > 0) {
        cout << "Positivo" << endl;
    } else if (a < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Cero" << endl;
    }
}
int main() {
    int a;
    cout << "Numero: ";
    cin >> a;

    numeros(a);
}