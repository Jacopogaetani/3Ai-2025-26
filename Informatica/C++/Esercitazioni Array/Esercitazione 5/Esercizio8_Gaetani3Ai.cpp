/*Dato un array di numeri, calcolare la media e contare quanti elementi sono maggiori della
media*/

#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int array[DIM], somma, maggioreMedia = 0;
	float media;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un numero: ";
		cin>>array[i];
		somma+=array[i];
		
	}
	
	cout<<somma<<endl;
	media = somma/DIM;
	cout<<"La media e' "<<media<<endl;
	
	for(int j = 0; j < DIM; j++)
	{
		if (array[j] > media)
		{
			maggioreMedia++;
		}
	}
	
	cout<<"Numeri maggiori della media: "<<maggioreMedia<<endl;
	return 0;
}


