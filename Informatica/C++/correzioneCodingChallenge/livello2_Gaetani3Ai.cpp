#include <iostream>
using namespace std;

int main()
{
/*Leggere numeri finché l’utente non inserisce -1
• Alla fine stampare:
• Quanti numeri totali sono stati inseriti
• Quanti sono pari, dispari, positivi, negativi, uguali a 0*/

int n, pari = 0, dispari = 0, positivi = 0, negativi = 0, numeriLetti = 0,zero = 0; 

do
{
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	if (n % 2 == 0)
	{
		pari++;
	}else{
		dispari++;
	}

	
	if (n > 0)
	{
		positivi++;
	}
	
	else if(n < 0)
	{
		negativi++;
	}else{
		zero++;
	}
	
	numeriLetti++;
	
}while (n != -1);

cout<<"QUADRO COMPLESSIVO DEI NUMERI LETTI: \n Numeri Totali: "	<<numeriLetti<<" \n Numeri Pari: "<<pari<<" \n Numeri Dispari: "<<dispari<<"\n Numeri positivi: "<<positivi<<"\n Numeri negativi: "<<negativi<<" \n Uguali a zero: "<<zero;
	
	return 0;
}
