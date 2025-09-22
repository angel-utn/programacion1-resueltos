#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Ingrese tres numeros: ";
    cin >> n1 >> n2 >> n3;

    int mayor = n1;
    if (n2 > mayor) mayor = n2;
    if (n3 > mayor) mayor = n3;

    cout << "El numero mayor es: " << mayor << endl;
    return 0;
}
