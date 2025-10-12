/*3. Somma dei primi N numeri pari successivi a un dato numero A
Scrivi un programma che:
 Riceve in input due numeri interi: un numero di partenza A e un numero N.
 Calcola la somma dei primi N numeri pari successivi a A.*/

#include <iostream>
using namespace std;

int main() {
    int n, a, somma = 0;
    cout<<"Inserisci il numero di partenza: ";
    cin>>a;
    cout<<"Inserisci il numero di valori pari da sommare: ";
    cin>>n;

    /*In questo ciclo ho usato due variabili: a e i. a è il numero da controllare, parte da a+1 e a ogni iterazione aumenta, al contrario, i aumenta solo se il numero a è pari, così da eseguire la somma di tot numeri (scelti da utente) */

    for (int i = 1; i <=n;) { //Non inserisco qui l'incremento per evitare di avere un incremento a ogni iterazione, così che io possa decidere quando incrementare i (Incrementato a linea 20)
        a+=1; //Incremento a, così a ogni iterazione possa incrementare di 1 il numero esaminato
        if(a % 2 == 0) {
            somma += a;
            i++; //Incremento i solo se a è pari
        }
    }

    cout<<somma;




    return 0;
}