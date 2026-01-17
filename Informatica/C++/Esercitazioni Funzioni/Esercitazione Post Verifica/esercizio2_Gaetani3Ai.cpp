/*Scrivere un programma in C++ che:
    1. acquisisca N numeri interi in un array;
    2. sostituisca:
        ? i numeri negativi con il valore assoluto;
        ? i numeri positivi con il loro quadrato;
        ? lasci invariati gli zeri;
    3. stampi l’array prima e dopo la modifica;
    4. stampi quanti numeri sono stati modificati.
ESEMPIO
Array prima della modifica: 	4  -9  2  0  -2
Array dopo la modifica: 	16  9  4 0  2*/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>

using namespace std;

int modifica(int array[], int DIM)
{
	int numeriModificati = 0; 
	for(int i = 0; i < DIM; i++)
	{
		if(array[i] < 0)
		{
			array[i] = abs(array[i]);
			numeriModificati++;
		}
		else if(array > 0)
		{
			array[i] = pow(array[i], 2);
			numeriModificati++;
		}
	}
	
	return numeriModificati;
}

int main()
{
	const int DIM = 5;
	int array[DIM];
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un valore intero per la posizione n. "<<i+1<<": ";
		cin>>array[i];
	}
	
	//Stampa array prima della funzione
	
	cout<<"Prima della Modifica: "<<endl;
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Posizione n. "<<i+1<<": "<<array[i]<<endl;
	}
	
	int numeriModificati = modifica(array, DIM);
	
	cout<<"Dopo la modifica: "<<endl;
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Posizione n.1 "<<i+1<<": "<<array[i]<<endl;
	}
	
	cout<<"Ho modificato "<<numeriModificati<<" numeri"<<endl;
}
