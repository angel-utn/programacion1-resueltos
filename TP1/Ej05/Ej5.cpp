#include <iostream>

using namespace std;

/*
    Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar
    por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el
    porcentaje de ventas para cada una de ellas.

    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calcular  e
    informar  A: 50%, B: 12,50% y C: 37,50%.
*/

int main()
{
    //Declaro variables
    int alfajor_A, alfajor_B, alfajor_C, totalAlfajores;
    float porcentaje_A, porcentaje_B, porcentaje_C;


    //Pido los datos
    cout << "Ingrese la cantida vendida para la Marca de alfajores A: ";
    cin >> alfajor_A;

    cout << "Ingrese la cantida vendida para la Marca de alfajores B: ";
    cin >> alfajor_B;

    cout << "Ingrese la cantida vendida para la Marca de alfajores C: ";
    cin >> alfajor_C;


    //Calculamos
    totalAlfajores = alfajor_A + alfajor_B + alfajor_C;

    porcentaje_A = ( alfajor_A * 100.0f) / totalAlfajores;
    porcentaje_B = ( alfajor_B * 100.0f) / totalAlfajores;
    porcentaje_C = ( alfajor_C * 100.0f) / totalAlfajores;

    //Mostramos los resultados
    cout << endl;
    cout << "Porcentaje de ventas de Marca A: " << porcentaje_A << "%" << endl;
    cout << "Porcentaje de ventas de Marca B: " << porcentaje_B << "%" << endl;
    cout << "Porcentaje de ventas de Marca C: " << porcentaje_C << "%" << endl;


    return 0;
}
