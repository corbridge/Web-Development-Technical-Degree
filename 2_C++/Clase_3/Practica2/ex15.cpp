/*
Realiza una matriz de 7X7 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=7; i++)
    {
        for(int j = 1; j<=7; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=7; i++)
    {
        for(int j = 1; j<=7; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}