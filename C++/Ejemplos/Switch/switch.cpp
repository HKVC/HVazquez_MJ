#include <iostream>
using namespace std;

int main()
{
    int opcion;
    cout<<"Bienvenido a Johanna's Cafe:"<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. Cafe a la Francesa"<<endl;
    cout<<"2. Te de Tsushima"<<endl;
    cout<<"3. Chocolate Caliente de la region de Kalos"<<endl;
    cout<<"4. Jugo de Naranja de Hoenn"<<endl;
    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Ahora, sleccione el numero de su bebida:";
    cin>>opcion;

    switch (opcion)
    {
    case 1: //cafe
    cout<<"El precio del cafe es 2 dolares"<<endl;
        break;
    
    case 2: //te de tsushima
    cout<<"El precio del Te de Tsushima es 1.50 dolares"<<endl;
    break;

    case 3: //chocolate caliente de la region de kalos
    cout<<"El precio del Chocolate Caliente de la region de Kalos es 2.50 dolares"<<endl;
    break;

    case 4://jugo de naranja de hoenn
    cout<<"El precio del Jugo de Naranja de Hoenn es 3 dolares"<<endl;
    default://en caso de que el cliente entre otro numero
    cout<<"No sea payaso y entre un numero valido. No soportaremos clientes bufones como usted."<<endl;
        break;
    }

    return 0;
}