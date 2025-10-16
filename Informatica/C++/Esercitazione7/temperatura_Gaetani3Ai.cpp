/*
Scrivi un programma che controlla se una temperatura letta da un sensore supera una certa soglia predefinita. Il programma:

    Usa una costante per definire la temperatura massima consentita (es. const int SOGLIA = 38).

    Chiede all’utente di inserire la temperatura attuale.

    Se la temperatura è maggiore della soglia, stampa un messaggio di allarme.

    Se è uguale o inferiore, stampa che la temperatura è nella norma.

    Alla fine, chiede se si vuole ripetere l’operazione.

    Usa un ciclo per permettere di ripetere il controllo*/
    
#include <iostream>
using namespace std;

int main()
{
	bool scelta = true;
	const float soglia = 38.0;
	float temperatura;
	int sceltaNumerica;
	
	while(scelta == true)
	{
		cout<<"Inserisci la temperatura rilevata dal sensore: ";
		cin>>temperatura;
		
		if (temperatura > soglia)
		{
			cout<<"Errore!!"<<endl;
		}
		
		else{
			cout<<"La temperatura è nella norma"<<endl;
		}
		
		cout<<"Si vuole ripetere la rilevazione? [1: Si' / 0: No]";
		cin>>sceltaNumerica;
		
		if (sceltaNumerica == 1)
		{
			cout<<"vero"<<endl;
			scelta = true;
		}
		else if (sceltaNumerica == 0)
		{
			cout<<"Chiusura del programma"<<endl;
			scelta = false;
		}
	
	}
	
	
	return 0;
}
