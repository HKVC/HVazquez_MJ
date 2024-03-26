#include <iostream>

using namespace std;

int main()
{
    double numerador, denominador, resultado;

    cout<<"Ingrse el numerador:";
    cin>>numerador;

    cout<<"Ingrese el denominador:";
    cin>>denominador;

    try
    {
        if(denominador == 0)
        //mensaje que describe el problema
        throw "Division not permitted. Denominator CANNOT be 0.";

        resultado = numerador/denominador;

        cout<<"Resultado:"<<resultado<<endl;
    }
    catch(const char* mensaje)
    {
        cout<<"Exception captured:"<<mensaje<<endl;
    }

    return 0;
    
}