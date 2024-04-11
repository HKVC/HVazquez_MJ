#include <iostream>

using namespace std;

int main()
{
    //variables
    string name;

    //entrada
    cout<<"Ingrse su nombre y primer apellido:";
    getline(cin, name);

    //ciclo for
    for(int i = 1; i <= 10; i++)
    {
        //salida
        cout<<"Hola, "<<name<<"."<<endl;
    }
}