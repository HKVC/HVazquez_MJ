#include <iostream>

using namespace std;

int main()
{
    float decimal; //variable de tipo float
    int entero; //variable de tipo entero

    cout<<"Ingrese un numero decimal:";
    cin>>decimal;

    entero = decimal; //extraccion parte entera del numero entrado

    try
    {
        if(decimal != entero)//condicion si el numero ingresado no es igual a un entero
        {
            throw "El numero ingresado no es un numero entero.";
        }
        
        cout<<"El numero entero ingresado es:"<<decimal<<endl;
    }
    catch(const char* mensaje)
    {
        cout<<"Exception captured:"<<mensaje<<endl;
    }

    return 0;
    
}

