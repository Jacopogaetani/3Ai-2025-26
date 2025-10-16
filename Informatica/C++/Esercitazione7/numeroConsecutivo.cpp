/*Far inserire all’utente una serie numerica di interi fermandosi quando viene inserito due volte consecutive lo stesso numero.*/

#include <iostream>
using namespace std;

int main()
{
	int numero, numeroPrecedente;
		
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	do{
		numeroPrecedente = numero;
		cout<<"Inserisci un nuovo numero: ";
		cin>>numero;
		
	}while(numero != numeroPrecedente);
	
	
	return 0;
}
