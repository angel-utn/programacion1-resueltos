#include <iostream>
using namespace std;

// Hacer un programa para ingresar por teclado un n£mero y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.

int main(){
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << endl << endl;

    if (numero % 2 == 0){
        cout << "El numero ingresado es par." << endl << endl;
    }
    else{
        cout << "El numero ingresado es impar." << endl << endl;
    }


    return 0;
}
