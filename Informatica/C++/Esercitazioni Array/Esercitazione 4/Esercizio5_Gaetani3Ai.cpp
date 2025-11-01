/*Esercizio 5:
Scrivi un programma in C++ che:
1. Legga 6 numeri interi.
2. Usi una variabile booleana per verificare se tutti i numeri nell' Array sono positivi.
3. Stampi un messaggio finale.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 5;
    int array[5];
    bool numeriPositivi = true;

    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];

        if(array[i] < 0)
        {
            cout<<array[i]<<" e' un numero negativo"<<endl;
            numeriPositivi = false;
        }
    }

    if(numeriPositivi == true){
        cout<<"Tutti i numeri nell'array sono positivi"<<endl;    
    }else{
        cout<<"Non tutti numeri nell'array sono positivi"<<endl;
    }




    return 0;
}