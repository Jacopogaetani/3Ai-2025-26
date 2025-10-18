/*Scrivi un programma in C++ che:
1. Chieda all’utente di inserire un numero intero.
2. Verifichi se il numero è multiplo sia di 3che di 5.
3. Memorizzi il risultato in una variabile booleana.
4. Stampi un messaggio che indichi se il numero è multiplo di entrambi o meno.
5. Verifica:
○ se non è multiplo di 3 né di 5.
○ se è positivo e maggiore di 100.*/

#include <iostream>
using namespace std;

int main()
{
    bool multiploCinqueEtre = false;
    int numero;

    cout<<"Inserisci un numero: ";
    cin>>numero;

    if (numero % 5 == 0 && numero % 3 == 0) //operatore logico and: richiede che tutte le condizioni siano vere
    {
        cout<<numero<<" È multiplo di 3 e 5 "<<endl;
        multiploCinqueEtre = true; //cambio della variabile boolena
    }
    else{
        cout<<numero<<" non è multiplo sia di 3 che di 5"<<endl;
        multiploCinqueEtre = false;
    }

    if (numero > 100 && numero > 0)
    {
        cout<<numero<<" È maggiore di 100 e positivo"<<endl;
    }else{
        cout<<numero<<" Non è sia maggiore di 100 che positivo"<<endl;
    }
    return 0;
}