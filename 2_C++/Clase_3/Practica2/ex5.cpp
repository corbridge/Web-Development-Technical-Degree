/*
Realizar un arreglo unidimensional que imprima del 1 al 60 
*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[60];
    for(int i = 1; i<=60; i++)
    {
        arreglo[i] = i;
        cout<<"\nElemento["<<i<<"]: "<<arreglo[i];
    }
    return 0;
}