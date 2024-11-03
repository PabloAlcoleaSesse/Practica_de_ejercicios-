//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

void comparador_numeros(int a, int b, int c) {
    if (a > b && a > c) {
        cout << "El primer numero es el mayor" << endl;
    } else if (b > a && b > c) {
        cout << "El segundo numero es el mayor" << endl;
    } else if (c > a && c > b) {
        cout << "El tercer numero es el mayor" << endl;
    } else {
        cout << "Los numeros son iguales" << endl;
    }

}

int main() {
    int a, b, c;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Introduce el tercer numero: ";
    cin >> c;

    comparador_numeros(a, b, c);
    return 0;
}