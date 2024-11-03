//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

double comparador (double a, double b, double c) {
    double precio_final;
    if (a < b && a < c) {
        precio_final = c + b;
    }else if (b < a && b < c) {
        precio_final = a + c;
    }else {
        precio_final = a + b;
    }
    return precio_final;
}

int main() {
    double precio_1, precio_2, precio_3;
    cout << "Introduce el primer precio: ";
    cin >> precio_1;
    cout << "Introduce el segundo precio: ";
    cin >> precio_2;
    cout << "Introduce el tercer precio: ";
    cin >> precio_3;


    cout <<  comparador(precio_1, precio_2, precio_3)<< endl;
    return 0;
}