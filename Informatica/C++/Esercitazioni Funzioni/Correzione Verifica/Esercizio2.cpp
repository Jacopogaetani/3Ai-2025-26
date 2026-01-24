/*Seguenti operaioni:

Creare un array di n elementi
acquisisca n numeri interi e li salvi nell'arary
Funzione stampa array 
per ogni valore */

#include <iostream>
#include <cmath>

using namespace std;

void riempimento(float array[], int DIM)
{
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un valore intero per la posizione n. "<<i+1<<" dell'array: ";
        cin>>array[i];
    }    
}

void stampa(float array[], int DIM)
{
    for(int i = 0; i < DIM; i++)
    {
        cout<<"posizione "<<i+1<<": "<<array[i]<<endl;
    }
}

int modifica(float array[], int DIM)
{
    int valoriNegativi = 0;
    for(int i = 0; i < DIM; i++)
    {
        if(array[i] > 0)
        {
            array[i] = sqrt(array[i]);
        }
        else if(array[i] < 0)
        {
            array[i] = 0;
            valoriNegativi++;
        }
    }

    return valoriNegativi;
}

int main()
{
    const int DIM = 5;
    float array[DIM];
    int valoriNegativi = 0;

    riempimento(array, DIM);
    stampa(array, DIM);

    valoriNegativi = modifica(array, DIM);

    cout<<"Ho contato "<<valoriNegativi<<" numeri minori di 0 nell'array iniziale"<<endl;

    stampa(array, DIM);



    return 0;
}