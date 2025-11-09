/*Esercizio 1
1. Chiedi all’utente due array A e B della stessa lunghezza n.
2. Calcola un array C dove ogni elemento è C[i] = A[i] + B[i].
3. Calcola un array D dove ogni elemento è D[i] = A[i] * B[i].
4. Stampa C e D.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 3;
    int a[DIM], b[DIM], c[DIM], d[DIM];
    
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero per l'array a: ";
        cin>>a[i];
        cout<<"Inserisci un numero per l'array b: ";
        cin>>b[i];

        c[i] = a[i] + b[i];
        d[i] = a[i] * b[i];

    }

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Indice "<<i<<" array c: "<<c[i]<<endl;
        cout<<"Indice "<<i<<" array d: "<<d[i]<<endl;

    }



    return 0;
}