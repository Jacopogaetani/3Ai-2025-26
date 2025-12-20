/*Genera 30 numeri casuali tra 1 e 50.
Conta quanti numeri hanno distanza dall’origine maggiore di 25, cioè:
sqrt(pow(x, 2)) > 25*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int numeriConDistanza = 0, x;

    for(int i = 0; i <= 30; i++)
    {
        x = rand()%101-50;

        if(sqrt(pow(abs(x), 2)) > 25)
        {
            numeriConDistanza++;
        }
    }

    cout<<numeriConDistanza<<" numeri generati hanno distanza dall'origine maggiore di 25"<<endl;


    return 0;
}