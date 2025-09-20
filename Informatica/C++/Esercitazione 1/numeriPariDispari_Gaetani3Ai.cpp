#include <iostream>
using namespace std;

int main()
{
	/*Scrivere un programma che, ricevuto in input un numero N, fornisca in output l’informazione se il numero è pari o dispari.*/
	
	int numero;
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	if (numero % 2 == 0)
	{
		cout<<"Numero pari"<<endl;
	}
	else
	{
		cout<<"Numero dispari"<<endl;
	}
	
	
	return 0;
}
