#include <iostream>
using namespace std;

int main()
{
	//Stampare i primi N numeri interi.
	
	/*ANALISI DEL PROBLEMA 
		Dati in input: n
		Dati in output: primi numeri n
		Strategia risolutiva: con un ciclo for (ciclo definito) viene stampata i fino a che non raggiunge il valore di n*/
	int n;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = 0; i <= n; i++)
	{
		cout<<i<<" ";
	}
	
	
	
	return 0;
}
