/*Esercizio 3
● Chiedi un numero n.
● Per ogni numero i da 1 a n, stampa tutti i suoi divisori.
Esempio per n = 6:
1: 1
2: 1 2
3: 1 3
4: 1 2 4
5: 1 5
6: 1 2 3 6*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Inserisci un numero: ";
    cin>>n;

    for(int i = 1; i <=n;i++)
    {

        for(int j = 1 ; j<= i; j++)
        {
            if(i % j == 0)
            {
            
                cout<<i<<" divisibile per: "<<j<<endl;
            }
        }
    }




    return 0;
}