#include <iostream>

using namespace std;

/*
    El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75
    píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la
    cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para
    elaborarlos.

*/

int main()
{

    //Declaro variables
    const int betamol = 45;
    //(En miligramos)
    const int micilina = 2000;
    const int acidoSinitico = 7;
    const int cantPildoras = 75;

    int cantFrascos;
    int totalBetamol, totalAcidoSinitico;
    int totalMicilina;

    //Pido los datos
    cout << "Ingrese cantidad de frascos de pildoras: ";
    cin >> cantFrascos;

    //Calculamos
    totalBetamol = (betamol * cantFrascos) * cantPildoras;
    totalMicilina = (micilina * cantFrascos) * cantPildoras;
    totalAcidoSinitico = (acidoSinitico * cantFrascos) * cantPildoras;

    //Mostramos
    cout << endl;
    cout << "| Para "<< cantFrascos <<" frascos de pildoras se necesitan: " << endl;
    cout << endl;
    cout << "| Betamol: " << totalBetamol << " mg" << endl;
    cout << "| Micilina: " << totalMicilina << " mg" << endl;
    cout << "| Acido Sinitico: " << totalAcidoSinitico << " mg" << endl;


    return 0;
}
