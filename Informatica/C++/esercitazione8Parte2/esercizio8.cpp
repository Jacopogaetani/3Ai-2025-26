/*Crea un programma in C++ che chieda all'utente di inserire la propria età.
1. Se l'età è inferiore a 18 anni, stampa "Minorenne".
2. Se l'età è compresa tra 18 e 65 anni (inclusi), stampa "Adulto".
3. Se l'età è superiore a 65 anni, stampa "Anziano".
Il programma deve continuare a richiedere l'età finché l'utente non inserisce un valore valido
(maggiore di 0 e al massimo 120).
Dopo aver classificato l'età, chiedi all'utente se desidera ripetere l'inserimento dell'età*/

#include <iostream>
using namespace std;

int main()
{
    int eta, confermaNumerica;
    bool conferma = true;

    do{
        cout<<"Inserisci la tua età: ";
        cin>>eta;

        if (eta <= 0 || eta > 120)
        {
            cout<<"Età non valida"<<endl;
        }

        else{
            if (eta < 18)
            {
                cout<<"Minorenne"<<endl;
            }
            else if (eta >= 18 && eta <= 65)
            {
                cout<<"Adulto"<<endl;
            }
            else if (eta > 65)
            {
                cout<<"Anziano"<<endl;
            }
        }


        cout<<"Continuare l'esecuzione? \n [1]Sì \n [2]No"<<endl;
        cin>>confermaNumerica;

        if(confermaNumerica == 1)
        {
            cout<<"Ripeto il controllo"<<endl;
            conferma = true;
        }else{
            cout<<"--TERMINE DELL'ESECUZIONE--"<<endl;
            conferma = false;
        }

    }while((eta <= 0 || eta > 120) || (conferma == true));



    return 0;
}