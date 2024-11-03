//
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>
using namespace std;
double ecuacion(int a, int b, int c) {
    double cb = c-b;
    double abc = cb/a;
    return abc;
}

int main() {
    int a, b, c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;

    cout << "Resultado: " << ecuacion(a, b, c) << endl;

}