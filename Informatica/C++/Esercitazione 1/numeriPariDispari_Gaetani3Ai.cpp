#include <iostream>
using namespace std;

int main()
{
	/*Scrivere un programma che, ricevuto in input un numero N, fornisca in output l’informazione se il numero è pari o dispari.
		ANALISI:
		Input : N
		Ouput : Stringa
		Procedimento : Costrutto if la quale condizione deve essere n % 2 == 0. Questo perché se il resto è uguale a 0 il numero è pari
	*/
	
	int numero;
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	if (numero % 2 == 0) //Importante il doppio uguale (operatore di assegnamento) Piuttosto che l'uguale singolo
	{
		cout<<"Numero pari"<<endl;
	}
	else
	{
		cout<<"Numero dispari"<<endl;
	}
	
	
	return 0;
}
