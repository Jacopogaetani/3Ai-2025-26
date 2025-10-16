/*Mario è uno studente che ha una quantità di soldi stabilita dall’utente, ogni giorno
Mario all’intervallo può acquistare al bar della scuola una pastina che costa 1 euro o
un panino che costa 1,5 euro.
Il programma continua a chiedere all’utente cosa mangerà Mario quel giorno finché
ha abbastanza soldi o non ha la possibilità di soddisfare il suo appetito con quello
che vuole.
Al termine del programma scrivere in output il numero di giorni in cui Mario ha
mangiato e quante volte ha mangiato una pastina e quante un panino.*/

#include <iostream>
using namespace std;

int main() {
    float soldi, costoPastina = 1.0, costoPanino = 1.50;
    int contatore = 0, numeroPastine = 0, numeroPanini = 0, scelta, giorno = 1;
    bool soldiSufficienti = true;


    cout<<"Quanti soldi possiede Mario? ";
    cin>>soldi;


    while(soldiSufficienti == true) { //Il ciclo si avvia solo se la condizione booleana è vera, alla prima iterazione si avvia sempre, perché è dichiarato come vero

        if(soldi < 1)
        {
            cout<<"Non hai soldi sufficienti per comprare nulla."<<endl;
            soldiSufficienti = false; //Se il saldo è minore di 1 soldiSufficienti viene dichiarata come falsa, e non viene continuato il ciclo
        }

        else //Inizio delle istruzioni se il saldo è maggiore di 1
        {
            cout<<"Giorno "<<giorno<< "\n Cosa mangera' Mario? \n [1]Panino 1,50 Euro \n [2]Pastina 1 Euro"<<endl;
            cin>>scelta;
            // cout<<"Giorno "<<contatore<< "\n Cosa mangera' Mario? \n [1]Panino 1,50 Euro \n [2]Pastina 1 Euro"<<endl;
            // cin>>scelta;
            if (scelta == 1)
            {
                if (soldi < 1.50) //Potrebbe verificarsi il caso che si abbiano soldi sufficienti per una pastina ma non per un panino, variabile bool settata a false
                {
                    cout<<"Non hai abbastanza soldi!!"<<endl;
                    soldiSufficienti = false;
                }

                soldi-=costoPanino;
                cout<<"Mario ha acquistato un panino. \n Saldo attuale: "<<soldi<<endl;
                numeroPanini++;
            }
            else if (scelta == 2)
            {
                soldi-=costoPastina;
                cout<<"Mario ha acquistato una pastina. \n Saldo attuale: "<<soldi<<endl;
                numeroPastine++;
            }
            contatore++;
            giorno++;
        }


    }
    cout<<"In "<<contatore<<" giorni, Mario ha acquistato "<<numeroPastine<<" pastine e "<<numeroPanini<<" panini "<<endl;


    return 0;
}