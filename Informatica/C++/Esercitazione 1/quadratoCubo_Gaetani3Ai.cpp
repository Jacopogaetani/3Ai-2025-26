#include <iostream>
using namespace std;

int main()
{
	//Scrivere un programma che, ricevuto in input un numero N, calcoli il cubo se il numero è maggiore di zero, il quadrato in caso contrario.
	
	int numero, cubo = 0, quadrato = 0;
	cout<<"Inserisci un numero: ";
	cin>>numero;
	
	if (numero > 0)
	{
		cubo = numero * numero * numero;
		cout<<"Il cubo di "<<numero<<" e' "<<cubo;
	}
	else if(numero < 0)
	{
		quadrato = numero * numero;
		cout<<"Il quadrato di "<<numero<<" e' "<<quadrato;
	}
	
	
	return 0;
}
