/*Esercizio 6
Dati due array A e B della stessa dimensione, creare un terzo array C in cui ogni elemento è
la somma dei corrispondenti elementi di A e B.*/

#include <iostream>
using namespace std;

int main()
{
	const int DIM = 5;
	int a[DIM], b[DIM], c[DIM];
	
	for(int i = 0; i<DIM; i++)
	{
		cout<<"Inserisci un un numero per l'array a: ";
		cin>>a[i];
		cout<<"Inserisci un un numero per l'array b: ";
		cin>>b[i];
		
		c[i] = a[i] + b[i];
		cout<<"Somma: "<<c[i]<<endl;
	}
	
	return 0;
}


