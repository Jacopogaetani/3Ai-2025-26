/*
Scrivi un programma in C++ che:
1. Legga due numeri interi a e b.
2. Stampa:
○ "Il numero maggiore è a" se a > b.
○ "Il numero maggiore è b" se b > a.
○ "I numeri sono uguali" se a == b.
3. Chieda all’utente se intende svolgere un nuovo confronto*/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int confermaUscita;

    do
    {
        cout<<"Inserisci a: ";
        cin>>a;
        cout<<"Inserisci b: ";
        cin>>b;

        if (a > b)
        {
            cout<<"Il numero maggiore è a"<<endl;
        }
        else if (a < b)
        {
            cout<<"Il numero maggiore è b"<<endl;
        }

        cout<<"Eseguire un nuovo confronto? 1 - Sì 0 - No ";
        cin>>confermaUscita;

        //Chiedere all'utente se vuole eseguire un nuovo controllo
        if (confermaUscita == 1) {
            confermaUscita = true;
            cout<<"Nuovo confronto"<<endl;
        }
        else {
            confermaUscita = false;
        }

        //Azzeramento delle variabili
        a = 0;
        b = 0;

    } while (confermaUscita == 1);

    cout<<"Termine dell'esecuzione"<<endl;

    return 0;
}