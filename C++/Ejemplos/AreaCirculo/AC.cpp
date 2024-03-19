#include <iostream>

using namespace std;

int main()
{
    //Definir variables
    double radio, area;
    const double Pi = 3.14;

    cout<<"Ingrese la medida del radio:";
    cin >> radio;

    area = Pi * radio * radio;

    cout<<"El area del circulo es "<<area<<"."<<endl;

    return 0;
}