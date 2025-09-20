#include <iostream>
using namespace std;

int main()
{
	/*Scrivere un programma che, ricevuto in input un numero intero non negativo compreso tra 0 e 30, corrispondente al voto della prova scritta di un esame, visualizzi in output i seguenti messaggi:

    “Valore non corretto” se il valore inserito è al di fuori dell’intervallo consentito di valori;
    “Hai superato l’esame e puoi registrare il voto” se il valore inserito è compreso tra 21 e 30;
    “Dovrai sostenere l’orale” se il valore inserito è compreso tra 16 e 20 
    “Mi dispiace, dovrai ripetere la prova scritta” se il valore inserito è minore o uguale a 15
	
	ANALISI DEL PROBLEMA:
	Dati in input: voto
	Dati in output: stringa
	Strategia risolutiva: Con un costrutto if e gli operatori logici and/or si va a verificare innanzi tutto che il valore sia nel range,e poi in base al valore va a stampare il messaggio fornito dal problema 
	*/
    int voto;
    
    cout<<"Inserisci il tuo voto: ";
    cin>>voto;
    
    if (voto <= 0 || voto > 30)
    {
    	cout<<"Valore non corretto"<<endl;
	}
	else if (voto >= 21 && voto <= 30)
	{
		cout<<"Hai superato l'esame e puoi registrare il voto"<<endl;
	}
	else if (voto >= 16 && voto <= 20)
	{
		cout<<"Dovrai sostenere l'orale"<<endl;
	}
	else if (voto <= 15)
	{
		cout<<"Mi dispiace, dovrai risostenere l'esame"<<endl;
	}
	
	return 0;
}
