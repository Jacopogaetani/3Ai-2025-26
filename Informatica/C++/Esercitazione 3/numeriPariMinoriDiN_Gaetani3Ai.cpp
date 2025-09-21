#include <iostream>
using namespace std;

int main()
{
	/*Stampare i numeri pari minori di N.
 	ANALISI DEL PROBLEMA
	Dati in input: numero n
	Dati in output: numeri pari minori di n
	Strategia risolutiva: Con un ciclo for (ciclo definito) che parte con la variabile i con il valore di n a essere decrementata di 1 (in modo tale che si possano analizzare i
	numeri minori di n). Con un costrutto if si verifica il resto della divisione di per 2, se il resto è 0 (quindi il numero è pari) viene stampato a schermo i, altrimenti il
	programma passa avanti*/
	
	int n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = n; i >= 0; i--){
		if (i  % 2 == 0)
		{
			cout<<i<<" ";
		}
	}
	
	
	
	return 0;
}

