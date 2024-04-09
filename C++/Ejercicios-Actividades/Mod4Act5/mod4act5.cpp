#include <iostream>

using namespace std;

int main()
{
    //variables
    double tarjetaVIP, suma150;

    //entrada (linea 11-15)
    cout<<"Acaso usted dispone de una tarjeta VIP? Entre 1 para SI, 2 para NO:";
    cin>>tarjetaVIP;

    cout<<"Acaso su compra fue de mas de $150? Entre 1 para SI, 2 para NO:";
    cin>>suma150;

    //seleccion
    if(tarjetaVIP == 1 || suma150 == 1)
    {
        cout<<"Usted aplica para el descuento.";
    }
    else
    {
        cout<<"Usted no aplica para descuento.";
    }

    //salida
    return 0;
}