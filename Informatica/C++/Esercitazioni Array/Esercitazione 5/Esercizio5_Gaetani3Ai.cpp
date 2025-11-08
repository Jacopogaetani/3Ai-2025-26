#include <iostream>
using namespace std;
/*Esercizio 5
Dato un array di N numeri, determinare i valori positivi e memorizzarli in un nuovo array e
calcolare la media aritmetica.*/

int main()
{
	const int DIM = 5;
	int array[DIM], arrayPositivi[DIM], somma, numeriPositivi = 0;
	float media;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero: ";
		cin>>array[i];
		
		if(array[i] > 0)
		{
			arrayPositivi[i] = array[i];
			somma+=array[i];
			numeriPositivi++;
		}
		
	}
	
	media = somma/numeriPositivi;
	
	cout<<"La media dei votin e' "<<media;
	return 0;
}


