/*5. Scrivere un programma in C++ che:
a. dichiara un array di 6 interi(utilizzare const);
b. inserisca tramite ciclo for i 6 elementi richiesti all'utente;
c. determina il numero di elementi pari all' interno dell' array.*/

#include <iostream>
using namespace std;

int main(){
    const int DIM = 6;
    int array[DIM], numeriPari = 0;

    for (int i = 0; i<DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];

        if(array[i] % 2 == 0)
        {
            cout<<array[i]<<" è un numero pari"<<endl;
            numeriPari++;
        }
    }
    
    cout<<"Hai inserito "<<numeriPari<<" numeri pari"<<endl;




    return 0;
}