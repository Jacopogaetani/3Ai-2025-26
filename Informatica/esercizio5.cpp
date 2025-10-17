/*Esercizio 5
1. Scrivi un programma che chieda due numeri e stampi il maggiore tra i due.
2. Scrivi un programma che chiede tre numeri all’utente e stampa il maggiore tra i tre.*/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, max;
    cout<<"Numero maggiore tra due"<<endl;

    cout<<"Inserisci il primo numero: ";
    cin>>num1;

    max = num1;

    cout<<"Inserisci il secondo numero: ";
    cin>>num2;

    if (num2 > max)
    {
        cout<<"Il massimo è "<<num2<<endl;
    }else{
        cout<<"Il massimo è "<<num1<<endl;
    }

    num1 = 0;
    num2 = 0;
    num3 = 0;
    max = 0;

    cout<<"Numero maggiore tra tre"<<endl;

    cout<<"Inserisci il primo numero: ";
    cin>>num1;

    max = num1;

    cout<<"Inserisci il secondo numero: ";
    cin>>num2;

    if (num2 > max)
    {
        max = num2;
    }

    cout<<"Inserisci il terzo numero: ";
    cin>>num3;

    if (num3 > max)
    {
        max = num3;
    }


    cout<<max;

    return 0;
}