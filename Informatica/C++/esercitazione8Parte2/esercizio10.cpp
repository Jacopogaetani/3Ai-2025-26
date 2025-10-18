/*Esercizio 10
1. Chieda all’utente di inserire un voto intero compreso tra 0 e 10.
2. Verifichi che il voto sia valido; se non lo è, richiedi nuovamente il voto.
3. Stampi la valutazione corrispondente al voto:
a. voto < 6 → "Insufficiente"
b. voto 6-7 → "Sufficiente"
c. voto 8-9 → "Buono"
d. voto 10 → "Ottimo"
4. Alla fine, chieda all’utente se vuole inserire un altro voto (rispondere “sì” o “no”).
5. Ripeta il processo finché l’utente risponde “sì”.
6. Conteggio di quante volte ogni valutazione (Insufficiente, Sufficiente, Buono, Ottimo)
è stata assegnata
7. Alla fine stampa un riepilogo con i totali
8. Gestione input (chiede conferma in caso di input errato)*/

#include <iostream>
using namespace std;
int main() {
    int voto, votiInsufficienti = 0, votiSufficienti = 0, votiBuoni = 0, votiOttimi = 0; //Variabili inizializzate a 0 per non riscontrare problemi di assegnamento automatico
    string conferma;


    //Verranno usati due do-while: Uno per il controllo riguardante il corretto inserimento del voto e uno sulla conferma di ripetere l'operazione
    do {
        do {
            cout<<"Inserisci il tuo voto: ";
            cin >> voto;
            if (voto <= 0 || voto > 10) {
                cout<<"Voto non valido!"<<endl; //Messaggio di errore se non viene inserito un numero nel range 0-10
            }
        }while (voto <= 0 || voto > 10); //Ripetere il ciclo finché non viene inserito un numero giusto

        if (voto < 6) {
            cout<<"Insufficiente"<<endl;
            votiInsufficienti++;
        }
        else if (voto >= 6 && voto <= 7) {
            cout<<"Sufficiente"<<endl;
            votiSufficienti++;
        }
        else if (voto >= 8 && voto <= 9) {
            cout<<"Buono"<<endl;
            votiBuoni++;
        }
        else if (voto == 10) {
            cout<<"Ottimo"<<endl;
            votiOttimi++;
        }


        cout<<"Vuoi esaminare un altro voto? \n [si] \n [no] "<<endl;
        cin >> conferma;
        if (conferma != "si") {
            cout<<"--Non verranno esaminati altri voti--"<<endl;
        }
    }while (conferma == "si"); //Controllo della variabile conferma

    cout<<"Voti Insufficienti: "<<votiInsufficienti<<endl;
    cout<<"Voti Sufficienti: "<<votiSufficienti<<endl;
    cout<<"Voti Buoni: "<<votiBuoni<<endl;
    cout<<"Voti Otimi: "<<votiOttimi<<endl;


    return 0;
}