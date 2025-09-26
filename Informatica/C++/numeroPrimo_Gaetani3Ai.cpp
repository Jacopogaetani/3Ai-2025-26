#include <iostream>
using namespace std;
/*Scrivi un programma in C++ che:
1. Chieda all’utente di inserire un numero intero n.
2. Verifichi se il numero è primo (cioè è divisibile solo per 1 e per sé stesso).
3. Stampa:
○ "Il numero è primo" se n è primo.
○ "Il numero non è primo" se n non è primo*/ 
int main()
{
    int n;
    cout<<"Inserisci un numero: ";
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout<<"Il numero non è primo"<<endl;
            break;
        }
        else{
            cout<<"Il numero è primo"<<endl;
            break;
        }
    }



    return 0;
}
