/*Esercizio 4
● Chiedi all’utente un numero n.
● Stampa un triangolo numerico crescente, con i numeri nella riga i.
Esempio per n = 5:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 */

#include <iostream>
using namespace std;

int main()
{
    int n, numero;

    cout<<"Inserisci un numero: ";
    cin>>n;
    numero = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<numero<<" ";
             numero++;

        }
        cout<<endl;
    }



    return 0;
}