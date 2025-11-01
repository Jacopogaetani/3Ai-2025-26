/*Esercizio 1:
Scrivi un programma in C++ che:
1. dichiara un array di 8 elementi;
2. inserisca tramite ciclo for i 8 elementi richiesti all'utente;
3. conta le occorrenze di un valore inserito dall' utente all' interno dell'array;
4. stampa il valore delle occorrenze.*/

#include <iostream>
using namespace std;

int main() {
    const int DIM = 7;
    int array[DIM];
    int numero, occorrenze = 0;

    for (int i = 0; i < DIM; i++) {
        cout<<"Inserisci un numero: ";
        cin >> array[i];
    }

    cout<<"Inserisci un numero da cercare nell'array: ";
    cin>>numero;

    for (int i = 0; i < DIM; i++) {
        if (numero == array[i]) {
            occorrenze++;
        }
    }

    cout<<"Ci sono "<<occorrenze<<" occorrenze per il numero "<<numero<<" nell' array"<<endl;

    return 0;
}
