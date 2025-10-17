/*Esercizio 4
Scrivi un programma che controlla se il numero è pari, dispari e se è positivo, negativo o
zero.*/

#include <iostream>
using namespace std;

int main()
{   
    int numero;

    cout<<"Inserisci un numero: ";
    cin>>numero;

    if(numero > 0)
    {
        cout<<"Il numero è positivo"<<endl;
    }else if (numero < 0)
    {
        cout<<"Il numero è negativo"<<endl;
    }else if (numero == 0)
    {
        cout<<"Il numero è uguale a 0"<<endl;
    }

    if(numero % 2 == 0)
    {
        cout<<"Il numero è pari"<<endl;
    }else if (numero % 2 != 0){
        cout<<"Il numero è dispari"<<endl;
    }
    


    return 0;
}