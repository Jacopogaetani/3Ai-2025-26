/*Scrivi un programma che legge una sequenza di numeri interi dall’utente, uno alla volta, e
termina la lettura non appena viene inserito un numero dispari.
Durante la lettura, il programma deve contare:
 Quanti numeri sono stati inseriti in totale (incluso il numero dispari che ha fermato la
lettura)
 Quanti fra i numeri inseriti sono diversi da zero
Alla fine, il programma deve stampare questi due valori.*/

#include <iostream>
using namespace std;

int main() {
    int contatore = 0, numeroInput, numeriDiversiDaZero = 0;
    do {
        cout<<"Inserisci un numero: ";
        cin>>numeroInput;

        if (numeroInput % 2 == 0) {
            cout<<numeroInput<<" non è un numero dispari, il programma continuerà la sua esecuzione."<<endl;
        }

        if (numeroInput % 2 != 0) {
            cout<<numeroInput<<" è un numero dispari, l'esecuzione del programma verrà terminata."<<endl;
        }

        if (numeroInput != 0) {
            numeriDiversiDaZero++;
        }


        contatore++;
    }while (numeroInput % 2 == 0);

    cout<<"Sono stati letti "<<contatore<<" numeri (contando il numero che ha terminato l'esecuzione), e di questi "<<numeriDiversiDaZero<<" erano diversi da 0"<<endl;


    return 0;
}