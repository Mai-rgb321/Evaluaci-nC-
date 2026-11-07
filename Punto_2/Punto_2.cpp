#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int Numero;

    cout<<"Ingrese el numero para comprobar si es primo o no: ";
    cin>> Numero;

    if (esPrimo(Numero))
    {
        cout<<"El numero es Primo"<<endl;
    }
    else
    {
        cout<<"El numero no es primo" <<endl;
    }

    return 0;
}
