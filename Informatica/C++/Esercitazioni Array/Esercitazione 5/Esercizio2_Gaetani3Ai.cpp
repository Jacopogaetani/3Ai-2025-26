/*Esercizio 2
Dato un array di N numeri interi, contare quanti sono pari e quanti dispari, salvandoli in due
array distinti e stampando i risultati.*/


#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], arrayPari[DIM] = {0,0,0,0,0}, arrayDispari[DIM] = {0,0,0,0,0}, indicePari = 0, indiceDispari = 0;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero per la posizione "<<i+1<<" : ";
		cin>>array[i];
		
		if(array[i] % 2 == 0)
		{
			arrayPari[indicePari] = array[i];
			indicePari++;
		}else{
			arrayDispari[indiceDispari] = array[i];
			indiceDispari++;
		}
		
	} 
	
	for(int c = 0; c < DIM; c++)
	{
		cout<<"Indice n. "<<c<<" pari: "<<arrayPari[c]<<endl;
		cout<<"Indice n. "<<c<<" dispari: "<<arrayDispari[c]<<endl;

	}

	return 0;
}


