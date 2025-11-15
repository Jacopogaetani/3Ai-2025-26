//3. Scrivi una funzione doppio() che prende un numero intero e restituisce il doppio.

#include <iostream>
using namespace std;

int doppio(int a)
{
    int doppio = a * 2;
    return doppio;
}

int main()
{
    int numero;
    cout<<"Inserisci un numero: ";
    cin>>numero;

    cout<<"Il doppio di "<<numero<<" e' "<<doppio(numero);

    return 0;
}