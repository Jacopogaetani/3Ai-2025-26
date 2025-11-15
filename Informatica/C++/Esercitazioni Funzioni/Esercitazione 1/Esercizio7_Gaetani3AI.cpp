/*Creare una funzione denominata “is_compreso” che, dato in ingresso un numero
intero n, restituisce true o false in base al fatto che n sia un numero compreso tra 0 e
100 oppure no. La funzione main deve prendere in ingresso da tastiera un numero n
e utilizzare la funzione "is_compreso".*/


#include <iostream>
using namespace std;

bool isCompreso (int a)
{
    if(a <= 100 && a >= 0)
    {
        return true;
    }else{
        return false;
    }
}

int main()
{
    int numero;
    
    cout<<"Inserisci un numero: ";
    cin>>numero;

    bool compreso = isCompreso(numero);

    if(compreso == true)
    {
        cout<<"Il numero e' compreso tra 0 e 100"<<endl;
    }else{
        cout<<"Il numero non e' compreso tra 0 e 100"<<endl;

    }
}