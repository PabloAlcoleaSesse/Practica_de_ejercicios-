 //
// Created by Pablo Alcolea Sesse on 3/11/24.
//
#include <iostream>

using namespace std;

int hipotenusa(int a, int b)
{
    int hipotenusa;
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    cout << "La hipotenusa es: " << hipotenusa << endl;



}


int main() {
 int a;
    cout << "Introduce el valor de a: ";
    cin >> a;
 int b;
    cout << "Introduce el valor de b: ";
    cin >> b;
 hipotenusa(a, b);
}