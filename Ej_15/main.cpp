//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;

void ordenador_de_numeros(double a, double b, double c) {
    if (a > b && a > c) {
        if (b > c) {
            cout << "El orden es: " << a << ", " << b << ", " << c << endl;
        } else {
            cout << "El orden es: " << a << ", " << c << ", " << b << endl;
        }
    }else if(b > a && b > c) {
        if(a > c){
            cout << "El orden es: " << b << ", " << a << ", " << c << endl;
        }else{
            cout << "El orden es: " << b << ", " << c << ", " << a << endl;
        }
    }else if(c > a && c > b){
        if(a > b){
            cout << "El orden es: " << c << ", " << a << ", " << b << endl;
        }else{
            cout << "El orden es: " << c << ", " << b << ", " << a << endl;
        }
    }
}
int main() {
    double a, b, c;
    cout << "Introduce el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Introduce el tercer numero: ";
    cin >> c;

    ordenador_de_numeros(a, b, c);
    return 0;
}