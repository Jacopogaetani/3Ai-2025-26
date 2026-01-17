/*Scrivere un programma in C++ che esegua le seguenti operazioni:
    1. definisca un array di N elementi interi;
    2. acquisisca N numeri interi da tastiera;
    3. calcoli il valore massimo e il valore minimo dell’array;
    4. calcoli la media aritmetica dei valori;
    5. stampi tutti i numeri che:
        ? sono maggiori della media;
        ? sono diversi dal valore massimo e dal valore minimo.
*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>

using namespace std;

int massimo(int array[], int DIM)
{
	int massimo = 0;
	massimo = array[0];
	bool diversoMaggiore, diversoMinimo, maggioreMedia;
	
	for(int i = 1; i < DIM; i++)
	{
		if(array[i] > massimo)
		{
			massimo = array[i];
		}
	}
	
	return massimo;
}

int minimo(int array[], int DIM)
{
	int minimo = 0;
	minimo = array[0];
	
	for(int i = 1; i < DIM; i++)
	{
		if(array[i] < minimo)
		{
			minimo = array[i];
		}
	}
	
	return minimo;
}

float calcoloMedia(int array[], float DIM)
{
	int sommaValori = 0;
	float media = 0;
	
	for(int i = 0; i < DIM; i++)
	{
		sommaValori+=array[i];	
	}
	
	media = sommaValori/DIM;
	
	return media;
	
}


int main()
{
	const int DIM = 5;
	int array[DIM], max = 0, min = 0;
	float media = 0.0;
	
	for(int i = 0; i < DIM; i++)
	{
		cout<<"Inserisci un valore intero per la posizione n. "<<i+1<<" dell'array"<<endl;
		cin>>array[i];
	}

	max = massimo(array, DIM);
	
	cout<<"massimo e' "<<max<<endl;
	
	min = minimo(array, DIM);
	
	cout<<"il minimo e' "<<min<<endl;
	
	media = calcoloMedia(array, DIM);
	
	cout<<"la media e' "<<media<<endl;

	for(int i = 0; i < DIM; i++)
	{
		if(array[i] != max && array[i] && array[i] > media)
		{
			cout<<array[i]<<" rientra in tutti i canoni!"<<endl;
		}
	}
	
	return 0;
}
