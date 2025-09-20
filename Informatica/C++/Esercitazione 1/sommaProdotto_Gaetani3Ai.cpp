#include <iostream>
using namespace std;

int main()
{
	/*Scrivere un programma che, ricevuti in input due numeri, se sono entrambi positivi ne calcoli la somma, altrimenti il prodotto.
	
	ANALISI DEL PROBLEMA
	Dati in input: a, b, risultato
	Dati in output: risultato
	
	STRATEGIA RISOLUTIVA
	Costrutto if, il quale va a controllare mediante l'operatore logico and (&&) se entrambi i numeri sono positivi, in caso affermativo alla variabile "risultato" viene assegnata la somma, altrimenti viene assegnata il "prodotto"
	
	*/
	int a, b, risultato = 0;
	
	cout<<"Inserisci il primo numero: ";
	cin>>a;
	cout<<"Inserisci il secondo numero: ";
	cin>>b;
	
	if (a && b > 0)
	{
		risultato = a + b;
	}
	
	else
	{
		risultato = a * b;
	
	}
	
	cout<<"Il risultato e' '"<<risultato;	
	
	
	return 0;
}
