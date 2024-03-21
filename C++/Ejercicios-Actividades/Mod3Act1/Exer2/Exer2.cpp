#include <iostream>

using namespace std;

int main()
{
    double distancia, tiempo, velocidad;

    cout<<"A que velocidad iba para llegar a tal lugar:";
    cin>>velocidad;

    cout<<"En que tiempo tardo en llegar a tal lugar:";
    cin>>tiempo;

    distancia = tiempo * velocidad;

    cout<<"Usted recorrio exactamente una distancia de "<<distancia<<".";

    return 0;
}