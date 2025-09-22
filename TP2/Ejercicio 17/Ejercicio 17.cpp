#include <iostream>

using namespace std;
/**
17)
Hacer un programa para ingresar por teclado cuatro números. Si los valores que se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”
, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.



*/
int main()
{
    int n1,n2,n3,n4;
    cout << "Ingrese cuatro numeros (cada uno de ellos separados por un enter)." << endl;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    cin>>n4;

    if(n2 >= n1 && n3 >= n2 && n4 >= n3){
        cout<<"Conjunto ordenado";
    }
    else {
        cout<<"Conjunto desordenado";
    }
    return 0;
}
