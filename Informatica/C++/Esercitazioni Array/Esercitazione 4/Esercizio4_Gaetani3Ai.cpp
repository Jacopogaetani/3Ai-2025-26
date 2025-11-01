/*Esercizio 4:
Scrivi un programma in C++ che:
1. Dichiari un array di 8 interi;
2. Verifichi (usando una variabile bool) se esiste almeno un numero pari nell’array;
3. Stampi un messaggio.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 8;
    int array[DIM];
    bool numeroPari = false;
    
    for(int i = 0; i < DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];

        if(array[i] % 2 == 0)
        {
            cout<<array[i]<< " e' un numero pari"<<endl;
            numeroPari = true;
        }
    }

    if(numeroPari == true)
    {
        cout<<"Nell'array e' presente almeno un numero pari"<<endl;
    }else{
        cout<<"Nell'array non e' presente un numero pari"<<endl;
    }

    return 0;
}