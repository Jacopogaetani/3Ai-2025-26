#include  <iostream>
using namespace std;

int main()
{
	/*Scrivere il programma C++ che riceve in input la misura del raggio e calcola la circonferenza e l’area del cerchio.
	 Nel caso in cui l’utente inserisca un valore non valido, il programma segnala l’errore e chiede di inserire nuovamente la misura del raggio.
	 
	Dati in input: raggio (utente) costante float per il pi greco uguale a 3.14
	Dati in output: circonferenza e area (inizialmente inizializzati a 0)
	Strategia risolutiva: con un Do-while viene chiesto all'utente un numero in input finché non viene inserito un numero maggiore di 0 
	(è stato usato un do-While affinché almeno una volta la richiesta di inserire il raggio venga stampata. Non è possibile usare for perché si tratta di un ciclo indefinito)
	Alle variabili area e circonferenza vengono attribuite i valori delle loro formule. Alla fine vengono stampate a video*/
	
	const float pi = 3.14;
	float raggio, circonferenza = 0, area = 0;
	
	do{
	cout<<"Inserisci il raggio: ";
	cin>>raggio;
	
	if(raggio <= 0)
	{
		cout<<"Valore non valido, riprova."<<endl;
	}
	
	}while (raggio <= 0);	
	
	circonferenza  = 2 * raggio * pi;
	area = pi * (raggio*raggio);
	
	cout<<"L'area del cerchio e' "<<area<<" e la circonferenza "<<circonferenza;

return 0;	
}
