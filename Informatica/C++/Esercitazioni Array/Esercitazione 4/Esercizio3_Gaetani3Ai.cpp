/*Esercizio 3:
Scrivi un programma in C++ che:
1. Legga 5 numeri interi in un array;
2. Usi una variabile booleana per verificare se i numeri sono ordinati in modo crescente;
3. Stampi un messaggio appropriato.
Suggerimento:
Confronta ogni elemento con il successivo.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 5;
    int array[DIM], massimo;
    bool ordineCrescente = true;

    for(int i = 0; i <DIM; i++) 
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];

        if (i == 0) //Se si è alla prima iterazione viene sempre posto come maggiore il numero appena inserito
        {
            massimo = array[i];
            cout<<"Il numero massimo che e' stato inserito e' "<<massimo<<endl;  
        }else{
            if(array[i] > massimo){ //Si va a vedere che il numero inserito sia maggiore del contenuto della variabile "maggiore"
                massimo = array[i];
                cout<<"Il numero massimo che e' stato inserito e' "<<massimo<<endl;  
            }else{ //Appena viene messo un numero minore del valore di "maggiore" viene posta come negativa la variabile booleana
                cout<<"Hai inserito un numero minore di "<<massimo<<endl;
                ordineCrescente = false;
            }
        }
    }

    if(ordineCrescente == true)
    {
        cout<<"I numeri sono stati inseriti in ordine crescente"<<endl;
    }else{
        cout<<"I numeri non sono stati inseriti in ordine crescente"<<endl;
    }





    return 0;
}