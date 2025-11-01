/*Esercizio 1 – Inizializzazione e stampa di un array
Scrivi un programma che:
1. Dichiari un array di 3 numeri interi.
2. Lo inizializzi direttamente nel codice con i valori {10, 20, 30}.
3. Stampi ogni elemento senza usare cicli.*/

#include <iostream>
using namespace std;

int main() {
    //Dichiarazione di un array di 3 interi, inizializzato a 10, 20, 30
    int numeri[3] = {10, 20, 30};

    //Stampo gli elementi dell'array, indicando il loro indice. L'indice. partendo da 0, deve arrivare a n-1. Se venisse stampato "numeri[3]" verrebbe stampato un valore randomico
    cout<<numeri[0]<<endl;
    cout<<numeri[1]<<endl;
    cout<<numeri[2]<<endl;


    return 0;
}
