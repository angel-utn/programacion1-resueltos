#include <iostream>

using namespace std;

int main()
{
///Ejercicio 19 - Ciclo while
/*
Hacer un programa para ingresar una lista de n£meros que finaliza cuando se ingresan dos n£meros positivos consecutivos,
y luego informar la cantidad de ternas de n£meros ceros ingresados consecutivamente.

Ejemplo A: 5, -10, 20, 0, 0, 0, -35, 0, 0, 0, -8, 15, 10.
Se listar  2 ternas de n£meros ceros ingresadas consecutivamente.*/

    int numero;
    int contadorPositivos = 0;
    int contadorCeros = 0;
    int contadorTernas = 0;

    while (contadorPositivos < 2){
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > 0){
            contadorPositivos++;
            contadorCeros = 0;
        }
        else{
            contadorPositivos = 0;
            if(numero == 0){
                contadorCeros++;
                
                if (contadorCeros == 3){
                  contadorTernas++;
                  contadorCeros = 0;
                }
                
            }
            else{
                contadorCeros = 0;
            }
        }
    }
    cout << "La cantidad de ternas de numeros ceros fueron: " << contadorTernas << endl << endl;

    return 0;
}
