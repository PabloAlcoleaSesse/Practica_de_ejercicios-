//
// Created by Pablo Alcolea Sesse on 3/11/24.
//

#include <iostream>

using namespace std;
int main(){
    int num;
    cout << "Introduce un numero entero: ";
    cin >> num;

    int cuadrado;
    cuadrado = pow(num, 2);
    int cubo;
    cubo = pow(num, 3);

    cout << "El cuadrado de el numero es: " << cuadrado << "\n";
    cout << "El cubo de el numero es: " << cubo << "\n";

    return 0;
  }
