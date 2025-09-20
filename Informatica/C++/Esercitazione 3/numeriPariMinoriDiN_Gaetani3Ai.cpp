#include <iostream>
using namespace std;

int main()
{
	/*Stampare i numeri pari minori di N.*/
	int n;
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = n; i >= 0; i--){
		if (i  % 2 == 0)
		{
			cout<<i<<" ";
		}
	}
	
	
	
	return 0;
}
