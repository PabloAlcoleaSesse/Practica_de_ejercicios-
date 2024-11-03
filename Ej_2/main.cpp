//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

int main () {
    double a;
    double b;
    double c;

    cout <<"Introduce tres numeros reales: ";
    cin >> a;
    cin >> b;
    cin >> c;

    double media = (a+b+c)/3;
    cout << "La media de los tres numeros es: " << media << endl;


    return 0;
}