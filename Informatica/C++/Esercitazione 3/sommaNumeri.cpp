#include <iostream>
using namespace std;
/*Calcolare la somma dei primi N numeri naturali.
	ANALISI DEL PROBLEMA:
	Dati in input: N, intero di nome somma inizializzato a 0
	Dati in output: somma dei primi N numeri naturali
	Strategia risolutiva: Dopo aver ricevuto in input il numero n, si crea un ciclo for (ciclo definito) dove ad ogni iterazione "i" si va a sommare al valore di "somma"
	Ottenendo così la somma dei primi N numeri interi*/
int main()
{
	int n, somma = 0;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = 0; i <= n; i++)
	{
		somma+=i;
		
	}
	
	cout<<somma<<"";
	
	
	
	return 0;
}

