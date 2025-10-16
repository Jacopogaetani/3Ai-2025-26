/* Leggere una serie di numeri interi passati dall’utente, fermandosi al primo numero
che rende la serie non crescente e restituendo quanti numeri erano stati inseriti.
Suggerimento: Una serie è non crescente quando trovi un numero che è uguale o più
piccolo di quello precedente.
Esempio:
3, 5, 7, 6 → qui 6 non è maggiore di 7, quindi la serie non è crescente*/

#include <iostream>
using namespace std;

int main() {
	int numero, numeroPrecedente;
	
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	do{
		numeroPrecedente = numero;
		cout<<"Inserisci un nuovo numero: ";
		cin>>numero;
		
	}while(numero > numeroPrecedente);
	
	cout<<"Hai interrotto la serie!"<<endl;




    return 0;
}
