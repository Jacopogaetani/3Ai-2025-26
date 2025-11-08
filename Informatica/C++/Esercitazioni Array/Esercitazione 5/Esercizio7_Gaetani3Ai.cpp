/*Esercizio 7
Dato un array di N numeri, creare un nuovo array con gli elementi in ordine inverso rispetto
all’originale*/

#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int arrayNormale[DIM], arrayInverso[DIM] = {0,0,0,0,0};
	
	for(int i = 1; i <= DIM; i++)
	{
		cout<<"Inserisci un numero: ";
		cin>>arrayNormale[i];
		arrayInverso[i] = arrayNormale[i];
	}
	
	for(int j = DIM; j > 0; j--)
	{
		cout<<arrayInverso[j]<<endl;
	}
	return 0;
}


