/*Mario � uno studente che ha una quantit� di soldi stabilita dall�utente, ogni giorno
Mario all�intervallo pu� acquistare al bar della scuola una pastina che costa 1 euro o
un panino che costa 1,5 euro.
Il programma continua a chiedere all�utente cosa manger� Mario quel giorno finch�
ha abbastanza soldi o non ha la possibilit� di soddisfare il suo appetito con quello
che vuole.
Al termine del programma scrivere in output il numero di giorni in cui Mario ha
mangiato e quante volte ha mangiato una pastina e quante un panino.*/

#include <iostream>
using namespace std;

int main()
{
	float soldi, costoPastina = 1.0, costoPanino = 1.50;
	int contatore = 1, numeroPastine = 0, numeroPanini = 0, scelta;
	bool soldiSufficienti = true;
	
	
	cout<<"Quanti soldi possiede Mario? ";
	cin>>soldi;
	
		if(1 > soldi)
		{
			cout<<"Non hai soldi sufficienti per comprare nulla."<<endl;
			soldiSufficienti == false;
		}
		
		while(soldiSufficienti == true){
			cout<<"Giorno "<<contatore<< "\n Cosa mangera' Mario? \n [1]Panino 1,50 Euro \n [2]Pastina 1 Euro"<<endl;
			cin>>scelta;
			if (scelta == 1)
			{
				if (soldi < 1.50)
				{
					cout<<"Non hai abbastanza soldi!!"<<endl;
					break;
					
				}
				
				soldi-=costoPanino;
				cout<<"Mario ha acquistato un panino. \n Saldo attuale: "<<soldi<<endl;
				numeroPanini++;
			}
			else if (scelta == 2)
			{
				soldi-=costoPastina;
				cout<<"Mario ha acquistato una pastina. \n Saldo attuale: "<<soldi<<endl;
				numeroPanini++;
			}
			 
			contatore++;
		}

	
	
	return 0;
}
