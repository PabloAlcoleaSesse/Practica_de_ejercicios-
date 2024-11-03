//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

double precio_final(double precio, double iva) {
    precio += precio * iva;
    return precio;
}
int main () {
    double precio, iva;
    cout << "Precio: ";
    cin >> precio;
    cout << "IVA: ";
    cin >> iva;

    cout << "Precio final: " << precio_final(precio, iva) << endl;
}