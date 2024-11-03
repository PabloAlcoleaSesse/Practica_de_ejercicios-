//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

void comparador (int a, int b){
      if (a > b) {
          cout << "El primer numero es mayor que el segundo" << endl;
      } else if (a < b) {
          cout << "El primer numero es menor que el segundo" << endl;
      } else {
          cout << "Los numeros son iguales" << endl;
      }
}
int main(){
      int numero_1, numero_2;
      cout << "Introduce el primer numero: ";
      cin >> numero_1;
      cout << "Introduce el segundo numero: ";
      cin >> numero_2;

      comparador(numero_1, numero_2);
}
