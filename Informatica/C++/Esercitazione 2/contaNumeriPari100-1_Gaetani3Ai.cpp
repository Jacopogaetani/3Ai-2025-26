#include <iostream>
using namespace std;

int main()
{
	/*
	Scrivere un programma che mostra a video i numeri pari compresi tra 0 e 100 in ordine decrescente.
	
	ANALISI DEL PROBLEMA
	Dati in input: /
	Dati in output: Numeri pari da 100 a 0
	Strategia risolutiva: viene usato un ciclo for, questo perché si sta lavorando con un ciclo definito (il programma specifica il numero di iterazioni), dove viene
	stabilita la variabile intera i a 100, e fino a che i non sarà minore uguale */
	
	for (int i = 100; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			cout<<i<<endl;
		}
	}
	
	return 0;
}
