#include <iostream>

using namespace std;

/*
    Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el
    valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.
*/

int main()
{

    //Declaro variables necesarias
    int cantHoras;
    float valorHora;
    float sueldo;


    //Pido los valores
    cout << "Ingrese cantidad de horas trabajadas: ";
    cin >> cantHoras;

    cout << "Ingrese el valor de la hora trabajada: ";
    cin >> valorHora;


    //Calculo y asigno
    sueldo = valorHora * cantHoras;


    //Muestro el resultado
    cout << endl;
    cout << "El sueldo del operario es: $" << sueldo << endl;

    return 0;
}
