/*
Imprima la serie del 4 (incremento) 
*/
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i%4 == 0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}