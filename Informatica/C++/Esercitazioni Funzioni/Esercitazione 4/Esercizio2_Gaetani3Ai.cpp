/*Conta pari e dispari: crea una funzione che in un array conta quanti numeri sono pari e dispari. 
resitutisci i valori tramite riferimento*/

#include <iostream>
using namespace std;

void contaPariDispari(int arr[], int size, int &numeroPari, int &numeroDispari)//Passaggio dei parametri tramite riferimento
{
    //Lettura dell'array
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0) //Controllo se il numero e' pari o meno
        {
            numeroPari++; //Incremento numeri pari
        }else{
            numeroDispari++; //Incremento numeri dispari
        }
    }
}

int main()
{
    const int DIM = 4;
    int array[DIM], numeroPari = 0, numeroDispari = 0; //Inizializzati a 0

    //Riempimento array
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci l'elemento n. "<<i+1<<": ";
        cin>>array[i];
    }

    cout<<"Al momento, ci sono "<<numeroPari<<" numeri pari e "<<numeroDispari<<" numeri dispari"<<endl; 
    contaPariDispari(array, DIM, numeroPari, numeroDispari);
    //I valori di numeri pari e numeri dispari vengono modificati
    cout<<"Ora invece ci sono "<<numeroPari<<" numeri pari e "<<numeroDispari<<" numeri dispari"<<endl; 



    return 0;
}
