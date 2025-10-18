/*Esercizio 9
Scrivi un programma in C++ che simula una gestione di magazzino per un negozio. L'utente
deve inserire quanti articoli desidera acquistare, quindi il programma deve eseguire le
seguenti operazioni:

1. Chiedi all'utente di inserire il numero di articoli che desidera acquistare (un numero
intero positivo).
Se il numero inserito è negativo o zero, stampa un messaggio di errore e ripeti la
richiesta finché l'utente non inserisce un numero valido.

2. Se il numero di articoli da acquistare è pari, calcola e mostra il prezzo totale (un
articolo costa 10 euro).
Se il numero di articoli da acquistare è dispari, calcola e mostra il prezzo totale con
uno sconto del 5%.

3. Dopo aver inserito il numero di articoli, chiedi all'utente di inserire il numero di articoli
disponibili nel magazzino.
Se il numero di articoli richiesti è maggiore di quelli disponibili, stampa un messaggio
che avvisa l'utente e riduci automaticamente il numero di articoli acquistabili a quelli
disponibili.

4. Dopo aver calcolato il totale, chiedi all'utente se desidera procedere con l'acquisto
(rispondere "sì" o "no").
Se l'utente risponde "sì", stampa il totale dell'acquisto. Se risponde "no", termina il
programma.*/

#include <iostream>
using namespace std;

int main()
{
    int articoliDaAcquistare, prezzoTotale, prezzoTotaleScontato,articoliInMagazzino;
    string acquisto;

    do
    {
        cout<<"Inserisci il numero di articoli da acquistare: ";
        cin>>articoliDaAcquistare;

        if(articoliDaAcquistare <= 0)
        {
            cout<<"Non puoi acquistare un numero negativo di articoli... "<<endl;
        }
    }while (articoliDaAcquistare <= 0);

    cout<<"Inserisci il numero di articoli in magazzino: ";
    cin>>articoliInMagazzino;

    if (articoliDaAcquistare > articoliInMagazzino)
    {
        cout<<"Stai acquistando un numero maggiore di articoli rispetto a quelli presenti in magazzino, per tanto acquisterai solo "<<articoliInMagazzino<<" articoli"<<endl;
        articoliDaAcquistare = articoliInMagazzino;
    }

    cout<<"Vuoi eseguire l'acquisto? \n [si] \n [no]"<<endl;
    cin>>acquisto;

    if (acquisto == "si")
    {
        if (articoliDaAcquistare % 2 == 0){
        prezzoTotale = articoliDaAcquistare * 10;
        cout<<"Non otterrai un prezzo scontato"<<endl;
        cout<<"Prezzo totale: "<<prezzoTotale;
        }
        else if (articoliDaAcquistare % 2 != 0)
        {
            prezzoTotale = articoliDaAcquistare * 10;
            prezzoTotaleScontato = prezzoTotale - (prezzoTotale * 0.05);
            cout<<"otterrai un prezzo scontato"<<endl;
            cout<<"Prezzo totale: "<<prezzoTotaleScontato;
        }
    }

    
    /*if (articoliDaAcquistare % 2 == 0){
        prezzoTotale = articoliDaAcquistare * 10;
        cout<<"Non otterrai un prezzo scontato"<<endl;
        cout<<"Prezzo totale: "<<prezzoTotale;
    }
    else if (articoliDaAcquistare % 2 != 0)
    {
        prezzoTotale = articoliDaAcquistare * 10;
        prezzoTotaleScontato = prezzoTotale - (prezzoTotale * 0.05);
        cout<<"otterrai un prezzo scontato"<<endl;
        cout<<"Prezzo totale: "<<prezzoTotaleScontato;
    }*/

    return 0;
}