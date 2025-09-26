/*Scrivi un programma in C++ che:
1. Chieda quanti numeri N l’utente vuole inserire (controllo inserimento numero maggiore di
0).
2. Legga N numeri interi da tastiera.
3. Calcoli la somma dei numeri.
4. Calcoli e stampi la media aritmetica dei numeri inseriti*/ 

#include <iostream>
using namespace std;

int main()
{
    int n;
    float media, voto, somma = 0;

    cout<<"Inserisci il numero di voti da registrare per la media: ";
    cin>>n;

    for (int i = 1; i<= n; i++)
    {
        cout<<"Inserisci il voto n. "<< i <<" : ";
        cin>>voto;
        somma += voto;
        voto = 0;
    }

    media = somma / n;
    cout<<"La media aritmetica dei voti inseriti è: "<<media;


    return 0;
}