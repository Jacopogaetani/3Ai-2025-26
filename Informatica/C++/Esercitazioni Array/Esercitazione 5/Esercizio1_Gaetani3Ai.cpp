/*Esercizio 1
Dato un array di N elementi contenente valori numerici, separare i valori positivi da quelli
negativi, memorizzandoli in due array distinti. Se viene individuato uno zero, stampare la
posizione in cui si trova (indice dell’array).*/


#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], arrayPositivi[DIM] = {0,0,0,0,0}, arrayNegativi[DIM] = {0,0,0,0,0}, indicePositivo = 0, indiceNegativo = 0;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero per l'elemento n. "<<i+1<<": ";
		cin>>array[i];
		
		if(array[i] > 0)
		{
			arrayPositivi[indicePositivo] = array[i];
			indicePositivo++;
		}
		else if(array[i] < 0)
		{
			arrayNegativi[indiceNegativo] = array[i];
			indiceNegativo++;
		}else{
			cout<<"Hai inserito un numero uguale a 0, nell'indice "<<i<<endl;
		}
	}
	
	for(int c = 0; c < DIM; c++)
	{
		cout<<"Indice n. "<<c<<"positivi : "<<arrayPositivi[c]<<endl;
		cout<<"Indice n. "<<c<<"negativi : "<<arrayNegativi[c]<<endl;

	}
	return 0;
}


