/*Esercizio 9
Dato un array di numeri e un valore X inserito dall’utente, stampare tutte le posizioni in cui X
compare.*/

#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], numero;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero nell'array : ";
		cin>>array[i];
	}
	
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	for(int i = 0; i < DIM; i++)
	{
		if(numero == array[i])
		{
			cout<<numero<<" Compare in posizione: "<<i<<endl;
		}
	}
	
	return 0;
}


