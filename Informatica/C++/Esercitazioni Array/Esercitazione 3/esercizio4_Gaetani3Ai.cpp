/*4. Scrivere un programma in C++ che:
a. dichiara un array di 15 elementi (utilizzare const);
b. inserisca tramite ciclo for i 15 elementi richiesti all'utente;
c. trova e stampa la media dei valori dell'array.*/

#include <iostream>
using namespace std;

int main()
{   
    const int DIM = 15;
    int array[DIM];
    float media = 0.0, somma = 0.0;

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];
        somma+=array[i];
    }

    media = somma / DIM; //La media è: somma di tutti gli elementi diviso il numero di elementi (in questo caso DIM)

    cout<<"La media è "<<media;





    return 0;
}