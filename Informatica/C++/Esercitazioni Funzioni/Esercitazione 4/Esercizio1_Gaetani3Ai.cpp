/*Somma e media di un array, crea una funzione che calcola
somma e media di un array, usa parametri per riferimento per restituire
risultati*/

#include <iostream>
using namespace std;

//funzione void
void calcolaSomma(int arr[], int size, float &somma, float &media) //parametri passati per riferimento
{
    for(int i = 0; i < size; i++) //Lettura dell'array
    {
        somma+=arr[i]; //L'i-esimo elemento dell'array va nella cella di memoria di somma
    }

    media = somma / size; //La cella di memoria di "media" viene sostituita con questo valore calcolato

    //nessun valore di ritorno perché non viene richiesto nelle funzioni void
}

int main()
{
    const int DIM = 3;
    int array[DIM];
    //Al momento, somma e media sono uguali a 0
    float somma = 0, media = 0;


    //Riempimento dell'array
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci l'elemento n. "<<i+1<<": ";
        cin>>array[i];
    }

    cout<<"Al momento, la somma equivale a "<<somma<<" e la media a "<<media<<endl;

    calcolaSomma(array, DIM, somma, media); //Chiamata della funzione. Ora i valori di somma e media sono diversi  

    cout<<"La somma corrisponde a : "<<somma<<endl;
    cout<<"La media corrisponde a : "<<media<<endl;


    return 0;
}