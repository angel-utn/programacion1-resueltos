#include <iostream>
using namespace std;

/*
 Hacer un programa para ingresar una lista de 8 numeros y luego informar
 si todos estan ordenados en forma creciente. En caso de haber dos numeros
 "empatados" considerarlos como crecientes.

Por ejemplo, si la lista fuera:

    Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitira un cartel: "Conjunto Ordenado"
    Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitira un cartel: "Conjunto Ordenado"
    Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitira un cartel: "Conjunto No Ordenado"

    Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.

*/

int main()
{
    int num, numAnterior, i;
    bool ordenado = true;

    cout << " Ingresa 8 numeros " << endl << endl;

    for(i = 1; i <= 8; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> num;

        if(i == 1)
        {
            numAnterior = num;
        }
        else
        {
            if(num < numAnterior)
            {
                ordenado = false;
            }
            numAnterior = num;
        }
    }


    if(ordenado == true)
    {
        cout << "Conjunto Ordenado" << endl;
    }
    else
    {
        cout << "Conjunto NO Ordenado" << endl;
    }

    return 0;
}
