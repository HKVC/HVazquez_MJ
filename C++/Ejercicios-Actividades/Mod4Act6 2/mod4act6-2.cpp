#include <iostream>

using namespace std;

int main()
{
    //variables
    double uno, dos, tres;


    //entradas (linea 12-19)
    cout<<"Eres miembro del teatro? Pon 1 para SI, 2 para NO:";
    cin>>uno;

    cout<<"Has comprado mas de 5 entradas ademas de ser miembro del teatro? Pon 1 para SI, 2 para NO:";
    cin>>dos;

    cout<<"No eres miembro, pero has comprado mas de 10 entradas? Pon 1 para SI, 2 para NO:";
    cin>>tres;

    //seleccion anidada (linea 22-35)
    if(uno == 1)
    {
        if(dos == 1)
        {
            cout<<"Recibiras un total de 15% de descuento en todas tus entradas.";
            terminate();
        }
        else
        {
            cout<<"Recibiras un total de 10% de descuento en todas tus entradas.";
            terminate();
        }
        
    }

    //seleccion
    if(tres == 1)
    {
        cout<<"Recibiras un 5% de descuento en todas tus entradas.";
    }

    //salida
    return 0;

}