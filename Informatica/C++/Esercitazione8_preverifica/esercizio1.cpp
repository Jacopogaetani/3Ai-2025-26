/*Esercizio 1
1. Scrivi un programma che stampi la somma parziale e totale dei numeri da 1 a 10
usando un ciclo for.
2. Stampa il quadrato dei numeri da 1 a 10*/

#include <iostream>
using namespace std;

int main()
{
    int n = 1;

    for(int i = 1; i <= 10; i++)
    {
        n+=i;
        cout<<n<<endl;
    }

    cout<<"Somma totale: "<<n;

    for (int c = 1; c <= 10; c++)
    {

        cout<<"Quadrato di "<<c<<" : "<<c * c<<endl;
    }

    return 0;
}