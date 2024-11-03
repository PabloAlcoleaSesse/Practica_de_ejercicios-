//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
#include "comparador.h"
using namespace std;

bool comparador(string cadena_1, string cadena_2) {
    if (cadena_1 == cadena_2) {
         cout << "Las cadenas son iguales" << endl;
    } else {
        cout << "Las cadenas son diferentes" << endl;
    }
}