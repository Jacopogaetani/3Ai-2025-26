/*1. Chiedi all’utente due array A e B della stessa lunghezza n.
2. Crea quattro array:
○ C[i] = A[i] + B[i] → somma
○ D[i] = A[i] * B[i] → prodotto
○ E[i] = A[i] - B[i] → differenza
○ F[i] = max(A[i], B[i]) → massimo tra i due elementi in quella posizione
3. Stampa tutti e quattro gli array.
4. Calcola e stampa anche la somma cumulativa totale di tutti gli array*/


#include <iostream>
using namespace std;

int main()
{   
    const int DIM = 3;
    int a[DIM], b[DIM], c[DIM], d[DIM], e[DIM], f[DIM];

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero per l'array a: ";
        cin>>a[i];
        cout<<"Inserisci un numero per l'array b: ";
        cin>>b[i];

        if(a[i] > b[i])
        {
            f[i] = a[i]; 
        }else{
            f[i] = b[i];
        }

        cout<<a[i] + b[i];

        c[i] = a[i] + b[i];
        d[i] = a[i] * b[i];
        e[i] = a[i] - b[i];
    }

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Somma tra "<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<endl;
        cout<<"Prodotto tra "<<a[i]<<" * "<<b[i]<<" = "<<d[i]<<endl;
        cout<<"Differenza tra "<<a[i]<<" - "<<b[i]<<" = "<<e[i]<<endl;
        cout<<"Maggiore tra "<<a[i]<<" e "<<b[i]<<" = "<<f[i]<<endl;

    }




    return 0;
}