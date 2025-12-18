/*

Menu principale con tre scelte:

    Gioca
    Vedi il miglior punteggio
    Esci

    Il gioco genera un numero casuale da 1 a 300
    Il programma conta i tentativi
    Aggiorna il record quando l’utente fa meno tentativi del precedente.

*/


#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int corpo(int &tentativi, int &tentativiMassimi, int &record, int &tentativiAttuali, int &contatore)
{
	int numeroGenerato;
	int tentativoUtente;
	
	numeroGenerato = rand()%300+1;
	cout<<"contatore: "<<contatore<<endl;
	cout<<"Shh... non dovresti saperlo ma... il numero segreto e' "<<numeroGenerato<<endl;
	
	do{
		cout<<"Inserisci un numero da 1 a 300: ";
		cin>>tentativoUtente;
		
		if(tentativoUtente > numeroGenerato)
		{
			cout<<"Hai inserito un numero troppo altpo"<<endl;
		}
		else if(tentativoUtente < numeroGenerato)
		{
			cout<<"Hai inserito un numero troppo basso"<<endl;
		}
		else if(tentativoUtente == numeroGenerato)
		{
			cout<<"Hai indovinato!"<<endl;
		}
		else{
			cout<<"Non valido, riprova"<<endl;
		}
		tentativiAttuali++;

	}while(numeroGenerato != tentativoUtente);
	
	cout<<"Hai fatto "<<tentativiAttuali<<" tentativi"<<endl;
	
	if(contatore == 0) //Se è la prima volta che si gioca imposta
	{
		record = tentativiAttuali;
	}else if(contatore > 0)
	{
		cout<<"Ci sto entrando eh"<<endl;
		if(tentativiAttuali < record || record > 0)
		{
			cout<<"Hai stabilito un nuovo record!"<<endl;
			record = tentativiAttuali;
			cout<<"Record: "<<record;
		}
	}
	tentativiAttuali = tentativi;
	tentativiAttuali = 0;
	
	return tentativi;
	
}

int main()
{
	srand(time(0));
	bool gioca = true;
	int sceltaNumerica;
	int tentativi = 0;
	int tentativiMassimi = 0;
	int tentativiAttuali = 0;
	int record = 0;
	int contatore = 0;

	
	do{
		cout<<" [1]Gioca \n [2]Vedi il miglior punteggio \n [3]Esci"<<endl;
		cin>>sceltaNumerica;
		if(sceltaNumerica == 1)
		{
			int tentativiMain = corpo(tentativi, tentativiMassimi, record, tentativiAttuali, contatore);
			contatore++;
		}
		else if(sceltaNumerica == 2)
		{
			cout<<"Miglior punteggio: "<<record;
		}
	}while(gioca == true);
	
	
	
	return 0;
}
