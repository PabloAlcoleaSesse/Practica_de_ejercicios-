//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
#include "comparador.h"
using namespace std;
int main() {
    string cadena_1;
    cout << "Introduce la primera cadena: ";
    cin >> cadena_1;
    cout << "Introduce la segunda cadena: ";
    string cadena_2;
    cin >> cadena_2;

    comparador(cadena_1, cadena_2);
}