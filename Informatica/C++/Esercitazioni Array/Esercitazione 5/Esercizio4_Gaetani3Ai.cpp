/*Esercizio 4
Dato un array di N numeri, determinare:
? il valore massimo e la posizione,
? il valore minimo e la posizione.*/



#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], massimo, minimo, indiceMinimo, indiceMassimo;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero per l'indice n. "<<i<<": ";
		cin>>array[i];
		if(i == 0)
		{
			massimo = array[i];
			minimo = array[i];
			indiceMassimo = i;
			indiceMinimo = i;
		}else{
			if(array[i] > massimo)
			{
				massimo = array[i];
				indiceMassimo = i;
			}else if(array[i] < minimo){
				minimo = array[i];
				indiceMinimo = i;
			}
		}
	}
	
	cout<<"Il numero massimo che hai inserito e': "<<massimo<<" che si trova all'indice n. "<<indiceMassimo<<" \nIl numero minimo che hai inserito e' "<<minimo<<" che si trova all'indice n. "<<indiceMinimo<<endl;
	return 0;
}


