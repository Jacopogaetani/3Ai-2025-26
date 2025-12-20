/*Genera un array di 10 numeri interi casuali compresi tra 1 e 40.
Per ogni elemento:
● calcola il quadrato
● calcola la radice quadrata*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    //Seme del numero randomico
    srand(time(0));

    //Dichiarazione e inizializzazione delle variabili e dei vettori
    const int DIM = 3;
    int power, array[DIM];
    float radice;

    //Riempimento dell'array con numeri casuali
    for(int i = 0; i < DIM; i++)
    {
        array[i] = rand()%40+1; //Attribuisce all'iesimo elemento dell'array un valore randomico da 1 a 40
        cout<<"Elemento n."<<i+1<<":"<<array[i]<<endl; //Stampa dell'elemento generato
    }

    
    for(int i = 0; i < DIM; i++)
    {
        power = pow(array[i], 2); //Calcola la potenza di 2 dell'iesimo elemento dell'array
        cout<<"Potenza di 2 dell' elemento n."<<i+1<<":"<<power<<endl;
        radice = sqrt(array[i]); //Calcola la radice quadrata dell'iesimo elemento dell'array
        cout<<"Radice dell'elemento n. "<<i+1<<" :"<<radice<<endl;
    }

    return 0;
}