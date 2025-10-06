/*1. Trova il valore massimo e conta quante volte appare
Scrivi un programma che permetta all’utente di inserire una sequenza di numeri interi e
determini:
 Qual è il valore massimo tra tutti i numeri inseriti
 Quante volte questo valore massimo si ripete nella sequenza
Indicazioni:
1. Il programma deve prima chiedere all’utente quanti numeri intende inserire (un intero
positivo N).
2. Successivamente, deve chiedere all’utente di inserire, uno alla volta, N numeri interi.
3. Durante l’inserimento dei numeri, il programma deve mantenere traccia del valore massimo
incontrato finora e contare quante volte questo massimo si presenta.
4. Alla fine, il programma deve stampare:
o Il valore massimo trovato nella sequenza
o Quante volte il valore massimo è stato inserito*/

#include <iostream>
using namespace std;

int main() {
    int n;
    float numero, massimo = 0, ripetizioneMassimo = 1;

    cout<<"Inserisci il numero di valori da inserire: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout<<"Inserisci il numero n. "<<i<<": ";
        cin>>numero;

        if (numero > massimo) {
            massimo = numero;
            ripetizioneMassimo = 1;
        }
        else if (numero = massimo) {
            ripetizioneMassimo++;
        }
    }

    cout<<"Il numero massimo letto è stato "<<massimo<<" ed è stato inserito "<< ripetizioneMassimo<<" volte"<<endl;





    return 0;
}