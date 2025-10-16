/*
    Dato l’esercizio 2 scrivere un programma che simula il controllo della temperatura in una stanza per più momenti della giornata (es: 5 rilevazioni).

    Alla fine delle 5 rilevazioni:

        Conta quante volte è stata superata la soglia.

        Calcola e stampa la media delle temperature inserite.

        Chiedi all’utente se vuole ripetere tutto il processo (altre 5 rilevazioni).

        Usa un ciclo per permettere la ripetizione.

        Non usare array.
*/

#include <iostream>
using namespace std;

int main()
{
	const int soglia = 38.0;
	int temperatura, media, somma, sceltaNumerica;
	bool scelta = true;
	
	while(scelta == true){
		for (int i = 1; i <= 5; i++)
		{
			cout<<"Rilevazione n. "<<i<<" inserire temperatura: ";
			cin>>temperatura;
			
			if (temperatura > soglia)
			{
				cout<<"Errore"<<endl;	
			}		
			else
			{
				cout<<"La temperatura e' nella norma"<<endl;
			}
			
			somma+=temperatura;
			media = somma / 5;			
			
		}
		
		cout<<"La media e' di "<<media<<endl;
		
		cout<<"Svolgere una nuova rilevazione di 5 temperature? [1: Si / 0: NO]";
		cin>>sceltaNumerica;
		
		if (sceltaNumerica == 1)
		{
			cout<<"Ripetiamo le rilevazione"<<endl;
			scelta = true;
		}
		else if (sceltaNumerica == 0)
		{
			cout<<"Chiusura programma";
			scelta = false;
		}
	}
	
	
	
	return 0;
}
