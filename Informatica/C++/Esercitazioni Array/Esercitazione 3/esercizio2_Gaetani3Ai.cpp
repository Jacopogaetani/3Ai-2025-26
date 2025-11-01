/*2. Scrivere un programma in C++ che:
a. dichiara un array di 10 elementi;
b. inserisca tramite ciclo for i 10 elementi richiesti all'utente;
c. somma gli elementi dell'array;
d. stampa il valore della somma.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 10;
    int array[DIM], somma = 0; //Somma inizializzata a 0

    for(int i = 0; i<DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i]; //Viene inserito un numero all'indice numero i
        somma+=array[i]; //Si aggiorna ad ogni ciclo
    }

    cout<<"La somma è "<<somma;





    return 0;    
}