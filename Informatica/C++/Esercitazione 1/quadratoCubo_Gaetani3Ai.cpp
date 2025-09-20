#include <iostream>
using namespace std;

int main()
{
	/*Scrivere un programma che, ricevuto in input un numero N, calcoli il cubo se il numero è maggiore di zero, il quadrato in caso contrario.
	
	ANALISI DEL PROBLEMA:
	Variabili in input: N
	Variabili in ouput: Risultato
	
	Strategia risolutiva: Costrutto if, il quale va a verificare il valore di n, se è maggiore di 0 viene attribuito a "risultato" il valore di numero * numero * numero (per calcolare il cubo), altrimenti a "risultato" viene
	dato il valore di numero * numero (per calcolare il quadrato)
	*/
	
	int numero, risultato;
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	if (numero > 0)
	{
		risultato = numero * numero * numero;
		cout<<"Il cubo di "<<numero<<" e' "<<risultato;
	}
	else if(numero < 0)
	{
		risultato = numero * numero;
		cout<<"Il quadrato di "<<numero<<" e' "<<risultato;
	}
	
	
	return 0;
}
