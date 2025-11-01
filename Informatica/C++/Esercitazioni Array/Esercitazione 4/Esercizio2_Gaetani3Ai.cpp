/*Esercizio 2:
Scrivi un programma in C++ che:
1. Dichiari un array di 10 numeri interi;
2. Chieda all’utente di inserire i valori;
3. Chieda un numero da cercare;
4. Usi una variabile bool per stabilire se il numero è presente nell’array e lo comunichi
all’utente.
Suggerimento:
Puoi utilizzare il booleano nella condizione del for*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 10;
    int array[DIM], numero;
    bool trovato = false;

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];
    }

    cout<<"Inserisci un numero da cercare nell'array: ";
    cin>>numero;

    for(int i = 0; i < DIM; i++)
    {
        if(numero == array[i])
        {
            trovato = true;
            cout<<numero<<" e' presente nel'array"<<endl;
        }
    }

    if(trovato == false)
    {
        cout<<numero<<" non e' presente nell'array"<<endl;
    }






    return 0;
}