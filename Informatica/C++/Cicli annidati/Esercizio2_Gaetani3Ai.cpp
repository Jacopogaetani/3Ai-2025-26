/*Esercizio 2:
Scrivere un programma che stampi una matrice quadrata di dimensione n x n,
riempiendola con numeri da 1 a n*n.
*/


#include <iostream>
using namespace std;

int main()
{
    int n, valore = 1;

    cout<<"Inserisci un valore per la matrice: ";
    cin>>n;

    for(int i = 1; i<=n; i++) //Gestisce le colonne
    {
        for(int j = 1; j<=n; j++) //Gestisce le righe
        {
            cout<<valore;
            valore++; //Arriva fino a n*n
        }
        cout<<"\n";
    }





    return 0;
}