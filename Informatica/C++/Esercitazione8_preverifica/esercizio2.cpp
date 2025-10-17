/*Esercizio 2
Scrivi un programma che chieda all’utente un numero intero positivo e stampi tutti i numeri
da 0 fino a quel numero (incluso) usando un ciclo while*/

#include <iostream>
using namespace std;

int main()
{
    int numero, contatore = 0;

    cout<<"Inserisci un numero: ";
    cin>> numero;

    while (contatore <= numero)
    {
        cout<<contatore<<endl;
        contatore++;
    }


    return 0;
}