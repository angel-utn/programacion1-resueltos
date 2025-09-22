#include <iostream>

using namespace std;

int main()
{


//19) El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:
 /**
 -----------------------------------
 Nombre        Tipo      Valor hora
-----------------------------------
 C/C++         'C'        $ 7500
 C#            '#'        $ 6100
 Python        'P'        $ 5400
 Go            'G'        $ 5000
 -----------------------------------
 */
 /*
 Adem s, si el proyecto es marcado como Urgente, se le aumenta un 120 % m s al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char)
y si es urgente o no (bool).
*/

    bool urgente;
    int horas;
    char lenguaje;
    float importe;

    cout<<"Ingrese el lenguaje de programaci¢n que utiliza en el proyecto de software: ";
    cin>>lenguaje;

    cout<<"Ingrese la cantidad de horas totales que lleva el proyecto: ";
    cin>>horas;

    lenguaje = toupper(lenguaje); //Convierte a mayuscula el caracter

    if(lenguaje == 'C'){
        importe = 7500 * horas;
    }
    else{
        if (lenguaje == '#'){
            importe = 6100 * horas;
        }
        else{
            if (lenguaje == 'P'){
                importe = 5400 * horas;
            }
            else{
                if (lenguaje == 'G'){
                    importe = 5000 * horas;
                }
                else{
                    cout << "ERROR, caracter invalido" << endl;
                    importe = 0;

                }
            }
        }
    }
    if (importe > 0){
        cout << endl << "Si necesita el proyecto de forma urgente, se le aumenta un 120% mas al costo del proyecto." << endl;
        cout << "Es urgente? 1)Si    2)No. " << endl;
        cin >> urgente;


        if(urgente == true){
            importe = importe * 2.2;
        }

        cout << endl << "El importe total es: $" << importe << endl;
    }



    return 0;
}
