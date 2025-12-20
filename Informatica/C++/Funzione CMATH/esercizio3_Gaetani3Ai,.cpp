/*Scrivi una funzione che riceve un array di numeri interi e calcola la media
quadratica:*/

#include <iostream>
#include <ctime>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    const int DIM = 3;
    int array[DIM], quadrato;
    float somma,media, mediaQuadratica;

    for(int i = 0; i < 3; i++)
    {
        array[i] = rand()%5+1;
        cout<<"Elemento n. "<<i+1<<": "<<array[i]<<endl;
        quadrato = pow(array[i], 2);
        somma+=quadrato;
    }

    media = somma/DIM;

    mediaQuadratica = sqrt(media);

    cout<<"La media quadratica e' "<<mediaQuadratica<<endl;



    return true;
}