#include <iostream>

using namespace std;

int main()
{   //variable
    int instrumento;
    //entrada
    cout<<"Seleccione que tipo de instrumento usted busca. Ya sea 1(Guitarra), 2(Piano), 3(Bateria), 4(Violin) o 5(Flauta):";
    cin>>instrumento;

    //condicion SWITCH
    switch (instrumento)
    {
    case 1: //en caso de que elija el 1
    cout<<"Este tipo de instrumento tiene un descuento del 10%"<<endl;
        break;
    
    case 2: //en caso de que elija el 2
    cout<<"Este tipo de instrumento tiene un descuento del 15%"<<endl;
    break;

    case 3: //en caso de que elija el 3
    cout<<"Este tipo de instrumento tiene un descuento del 20%"<<endl;
    break;

    case 4: //en caso de que elija el 4
    cout<<"Este tipo de instrumento tiene un descuento del 12%"<<endl;
    break;

    case 5: //en caso de que elija el 5
    cout<<"Este tipo de instrumento tiene un descuento del 8%"<<endl;
    break;

    default://en caso de que el cliente entre otro numero
    cout<<"No sea payaso y entre un numero valido. No soportaremos clientes bufones como usted."<<endl;
        break;
    }

    //salida
    return 0;
}
