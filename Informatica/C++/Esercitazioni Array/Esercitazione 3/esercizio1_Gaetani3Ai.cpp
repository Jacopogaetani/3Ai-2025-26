/*1. Scrivere un programma in C++ che:
a. dichiara un array di 7 elementi;
b. inserisca tramite ciclo for i 7 elementi richiesti all'utente;
c. stampa gli elementi dell' array indicando anche la loro posizione.*/

#include <iostream>
using namespace std;

int main()
{
   const int DIM = 7; //Utilizziamo una costante affinché il valore della dimensione dell'array non possa mai cambiare
   int array[DIM]; //Viene dichiarato un array di interi, denominato "array" con una dimensione pari al valore della costante DIM

   for (int i = 0; i < DIM; i++) //Usiamo un ciclo for per riempire l'array
   {
      cout<<"Inserisci un numero per l'indice n. "<<i<<" : " ;
      cin >> array[i];

   }
   for (int i = 0; i < DIM; i++)
   {
      cout<<"Indice n.1: "<<array[i]<<endl;

   }




   return 0;
}