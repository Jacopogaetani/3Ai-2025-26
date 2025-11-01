/*3. Scrivere un programma in C++ che:
a. dichiara un array di 9 elementi (utilizzare const);
b. inserisca tramite ciclo for i 9 elementi richiesti all'utente;
c. trova e stampa il valore massimo all' interno dell'array e il suo indice.*/

#include <iostream>
using namespace std;

int main()
{
    const int DIM = 9;
    int array[DIM], numeroMassimo, indiceMassimo; //Non inizializzo le due variabili, così che possano assumere il valore del primo dato inserito

    for(int i = 0; i<DIM; i++)
    {
        cout<<"Inserisci un numero: ";
        cin>>array[i];
        if(i == 0) //Se il ciclo è alla prima iterazione viene posto il numero preso in input come massimo
        {
            numeroMassimo = array[i];
            indiceMassimo = i;
        }else{
            if(array[i] > numeroMassimo)
            {
                numeroMassimo = array[i];
                indiceMassimo = i;
            }
        }
    }

    cout<<"Il numero massimo è stato: "<<numeroMassimo<<" che si trova all'indice "<<indiceMassimo<<endl;





    return 0;
}