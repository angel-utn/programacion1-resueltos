#include <iostream>
using namespace std;

int main(){
    int Nro,Max1,Max2;
    for(int i=1;i<=5;i++)
    {
        cout<<"Ingresar un Nro."<<endl;
        cin>>Nro;
        if(i==1)
        {
            Max1=Nro;
        }
        else if(Nro>Max1)
        {
            Max2=Max1;
            Max1=Nro;
        }
        else if(Nro>Max2 || i==2)
        {
            Max2=Nro;
        }
    }

    cout<<"El mayor de los cinco numeros es: "<<Max1<<endl;
    cout<<"El segundo mayor de los cinco numeros es : "<<Max2<<endl;

    return 0;
}
