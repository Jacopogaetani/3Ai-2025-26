/*6. Scrivere un programma in C++ che:
a. dichiara un array di 10 elementi;
b. inserisca tramite ciclo for i 10 elementi richiesti all'utente;
c. somma solo i numeri positivi dell'array;
d. stampa il valore della somma*/

#include <iostream>
using namespace std;

int main()
{   
    const int DIM = 10;
    int array[DIM], sommaPositivi = 0;

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];
        
        if(array[i] > 0)
        {
            cout<<"Hai inserito un numero positivo, ovvero "<<array[i]<<endl;
            sommaPositivi+=array[i];
        }
    }

    cout<<"La somma dei positivi è "<<sommaPositivi<<endl;



    return 0;
}