/*Scrivi un programma che:
1. Inizializzi un array di 5 caratteri a tua scelta.
2. Chieda all’utente di inserire un numero da 0 a 4, che rappresenta la posizione di un
elemento nell’array.
3. Visualizzi sullo schermo il carattere presente nella posizione scelta.
4. Controlli che l’indice inserito dall’utente sia valido. Se l’indice è fuori dal range, il
programma dovrà stampare un messaggio di errore.*/

#include <iostream>
using namespace std;

int main() {
    //Array di 5 caratteri
    char caratteri[5] = {'c', 'l', 'a', 'i', 'r'};
    int numero;

    //Ciclo che controlla che il numero inserito sia nel range 0-4, e in caso stampa un messaggio di errore
    do {
        cout<<"Inserisci un numero da 0 a 4: ";
        cin>>numero;
        if (numero > 4 || numero < 0) {
            cout<<"ERRORE! Indice fuori dal range!"<<endl;
        }
    }while (numero > 4 || numero < 0);

    cout<<caratteri[numero]<<endl; //Stampa l'elemento dell'array che si trova nell'indice inserito precedentemente dall'utente


    return 0;
}