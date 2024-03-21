#include <iostream>

using namespace std;

int main()
{
    double ex1, ex2, ex3, ex4, promedioFinal, suma;                                                                                                                                          

    cout<<"Ingrese la nota del primer examen (?/100):";
    cin>> ex1;

    cout<<"Ingrese la nota del segundo examen (?/100):";
    cin>> ex2;

    cout<<"Ingrese la nota del tercer examen (?/100):";
    cin>> ex3;

    cout<<"Ingrese la nota del cuarto examen (?/100):";
    cin>> ex4;

    suma = ex1 + ex2 + ex3 + ex4;

    promedioFinal = suma/400 * 100;

    cout<<"La nota final del estudiante es "<<promedioFinal<<"."<<endl;

    return 0;
}