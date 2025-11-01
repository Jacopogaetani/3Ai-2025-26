/*Scrivi un programma che:
1. Dichiari un array di 6 interi inizializzato a {2, 4, 6, 8, 10, 12}.
2. Calcoli la somma di tutti gli elementi con un ciclo for.
3. Stampi il risultato finale.
Esempio di output:
Somma = 42*/

#include <iostream>
using namespace std;

int main() {
    //Dichiarazione e inizializzazione di un array di interi
    int numeri[6] = {2, 4, 6, 8, 10, 12};
    int somma = 0; //Somma inizializzata a 0

    //For che parte da 0 perché analizza gli indici a partire da 0, fino ad arrivare a 5
    for (int i = 0; i <= 5; i++) {
        cout<<"Sommo "<<numeri[i]<<endl;
        somma+=numeri[i]; //Somma che si aggiorna ad ogni iterazione
    }

    cout<<"Somma finale: "<<somma;


    return 0;
}