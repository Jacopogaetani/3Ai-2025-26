/*Esercizio 1:
Scrivere un programma che stampa la tabella di moltiplicazione da 1 a 3, cioè
una tabella 3 righe × 3 colonne, usando cicli annidati.*/

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=3; i++) //Primo ciclo, i viene incrementata quando j è 3
    {
        for(int j = 1; j<=3;j++)
        {
            cout<<i<<" * "<<j<<" : "<<i*j<<endl;
        }
    }




    return 0;
}