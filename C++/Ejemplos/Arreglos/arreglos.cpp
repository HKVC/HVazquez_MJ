#include <iostream>
#include <string>

using namespace std;

int main()
{
    
        std::string personajes[10];
    personajes[0]= "Ash-Greninja";
    personajes[1]= "Rayquaza";
    personajes[2]= "Groudon";
    personajes[3]= "Necrozma";
    personajes[4]= "Loki";
    personajes[5]= "Izanagi-no-Okami Picaro";
    personajes[6]= "Akechi";
    personajes[7]= "Serena";
    personajes[8]= "May";
    personajes[9]= "Rebellion Blade";

    for(int i = 0; i<11;i++)
    {
        cout<<personajes[i]<<endl;
    }
    
    
    
    int numeros[9];
    numeros[0]= 9;
    numeros[1]= 8;
    numeros[2]= 7;
    numeros[3]= 6;
    numeros[4]= 5;
    numeros[5]= 4;
    numeros[6]= 3;
    numeros[7]= 2;
    numeros[8]= 1;

    for(int i = 0; i < 10; i++)
    {
        cout<<numeros[i]<<endl;
    }

    return 0;
    
}