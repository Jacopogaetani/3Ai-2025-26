/*6. Creare una funzione denominata “is_pari” che, dato in ingresso un numero intero,
restituisce true o false, nel caso sia un numero pari o no.
La funzione main deve prendere in ingresso da tastiera un numero n: se n è minore
di uno, il programma deve terminare, altrimenti, stampa una scritta che dice se il
numero è pari o no (utilizzando “is_pari ”).*/

#include <iostream>
using namespace std;

bool isPari(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }else{
        return false;
    }

    return isPari;

}

int main()
{
    int n;
    cout<<"Inserisci un numero: ";
    cin>>n;

    if(n == 0)
    {
        cout<<"Hai inserito un numero uguale a 0, chiusura del programma"<<endl;
    }
    else{
        bool pari = isPari(n);

        if(pari == true)
        {
            cout<<"Il numero e' pari"<<endl;
        }else{
            cout<<"Il numero non e' pari"<<endl;
        }
    }

    return 0;
}