/* Livello 3 – Classificatore numeri speciali (+20 punti)
Cosa deve fare il programma:
• Chiedere all’utente un numero N
• Per ogni numero da 1 a N, stampare:
• Se è primo, stampa: X è primo
• Se è multiplo di 3 ma non di 5, stampa: Pippo
• Se è multiplo di 5 ma non di 3, stampa: Pluto
• Se è multiplo di entrambi, stampa: PippoEPluto*/

#include <iostream>
using namespace std;

int main()
{
	int n, divisori = 0;
	bool numeroPrimo, numeroMultiploTre = false, numeroMultiploCinque = false;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = 1; i <= n; i++)
	{
		numeroPrimo=true;
				
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				numeroPrimo = false;
			}
		}
		
		if (numeroPrimo && i != 1) {
			cout<<i<<" e' un numero primo'"<<endl;
		}
		
		if(i % 3 == 0 && i % 5 != 0)
		{
			cout<<i<<" Pippo"<<endl;
		}
		if(i % 3 != 0 && i % 5 == 0)
		{
			cout<<i<<" Pluto"<<endl;
		}
		if(i % 3 == 0 && i % 5 == 0)
		{
			cout<<i<<"PippoEpluto"<<endl;
		}
	}
	
	
	return 0;
}
