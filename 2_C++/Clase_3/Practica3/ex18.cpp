/*
Realiza una matriz de 10X10 
*/

#include <iostream>
using namespace std;

int main()
{
    int matriz[11][11];
    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)
        {
            freopen ("ex18.txt", "a" , stdout);
            cout<<matriz[i][j]<<" ";
            fclose (stdout);
        }
        cout<<"\n";
    }
    return 0;
}