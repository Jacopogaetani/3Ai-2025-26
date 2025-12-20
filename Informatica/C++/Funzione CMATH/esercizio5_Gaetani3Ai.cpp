/*Genera un array di 15 numeri casuali tra 1 e 30.
Trova il numero più vicino allo zero usando il valore assoluto.*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main()
{   
    srand(time(0));
    const int DIM = 15;
    int numeroVicino, array[DIM];
    for(int i = 0; i < DIM; i++)
    {
        array[i] = rand()%61-30;
        if(i == 0)
        {
            numeroVicino = abs(array[i]);
        }
        else{
            if(abs(array[i]) < numeroVicino)
            {
                numeroVicino = abs(array[i]);
            }
        }
    }

    cout<<numeroVicino<<" e' il numero piu' vicino allo 0"<<endl;




    return 0;
}