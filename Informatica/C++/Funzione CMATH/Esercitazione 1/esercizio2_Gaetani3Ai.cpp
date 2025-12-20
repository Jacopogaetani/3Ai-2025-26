/*Inserisci N numeri interi in un array.
Calcola la somma dei quadrati di tutti i numeri.*/

#include <iostream>

#include <cmath>

using namespace std;

int main()
{   
    const int DIM = 3;
    int array[DIM], somma = 0;

    //Riempimento dell'array con un numero chiesto in input
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un elemento per la posizione n. "<<i+1<<": ";
        cin>>array[i];
        cout<<"Il quadrato di "<<array[i]<<" e' "<<pow(array[i], 2)<<endl;
        somma+=pow(array[i], 2); //Calcolo della potenza di 2 dell'iesimo elemento dell'array che viene poi sommato alla variabile accumulatrice

    }

    cout<<"La somma e' "<<somma<<endl;




    return 0;
}