//1. Scrivi una funzione prodotto() che prende due numeri e restituisce il loro prodotto.

#include <iostream>
using namespace std;
int prodotto(int a, int b)
{
    int prodotto = a * b;
    return prodotto;
}
int main()
{
    int num1, num2;
    cout<<"Inserisci un numero: ";
    cin>>num1;
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;

    int risultato = prodotto(num1, num2);
    cout<<"Il risultato e' "<<risultato<<endl;


    return 0;
}