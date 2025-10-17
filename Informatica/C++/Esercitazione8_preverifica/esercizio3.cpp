/*Esercizio 3
1. Scrivi un programma che chieda all’utente un numero e continui a chiederlo finché
l’utente non inserisce 0. Alla fine stampa "Fine".
2. Somma tutti i numeri inseriti prima dello zero e stampa la somma*/

#include <iostream>
using namespace std;

int main()
{
    int numero, somma = 0;

    while (numero != 0)
    {
        cout<<"Inserisci un numero: ";
        cin>>numero;
        somma+=numero;
    }

    cout<<"La somma è "<<somma<<endl;
}