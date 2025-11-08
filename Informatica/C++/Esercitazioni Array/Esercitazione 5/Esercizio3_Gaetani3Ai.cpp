/*Dato un array di numeri, creare due array:
? uno contenente tutti i numeri multipli di 3,
? l’altro contenente i non multipli di 3.*/


#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], arrayMultipli[DIM] = {0,0,0,0,0}, arrayNonMultipli[DIM] = {0,0,0,0,0}, indiceNonMultipli = 0, indiceMultipli = 0;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero per la posizione n. "<<i+1<<": ";
		cin>>array[i];
		
		if(array[i] % 3 == 0)
		{
			arrayMultipli[indiceMultipli] = array[i];
			indiceMultipli++;
		}else{
			arrayNonMultipli[indiceNonMultipli] = array[i];
			indiceNonMultipli++;
		}
	}
	
	for(int c = 0; c < DIM; c++)
	{
		cout<<"Indice n. "<<c<<" multipli di 3: "<<arrayMultipli[c]<<endl;
		cout<<"Indice n. "<<c<<" non multipli di 3: "<<arrayNonMultipli[c]<<endl;

	}
	return 0;
}


