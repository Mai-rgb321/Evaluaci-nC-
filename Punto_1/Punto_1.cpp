#include <iostream>
using namespace std;

long long potencia(long long base,int exponente)
{
    long long resultado = 1;

    for (int i = 1; i <= exponente; i++)
    {
        resultado = resultado * base;
    }

    return resultado;
}

int main()
{
    long long base;
    int exponente;
    long long resultado;

    cout<<"Ingrese el numero de la base: ";
    cin>> base;

    cout<<"Ingrese el numero del exponente: ";
    cin>>exponente;

    resultado = potencia(base, exponente);

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}
