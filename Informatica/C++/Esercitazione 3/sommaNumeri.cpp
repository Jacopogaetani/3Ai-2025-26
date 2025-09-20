#include <iostream>
using namespace std;

int main()
{
	int n, somma = 0;
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = 0; i <= n; i++)
	{
		somma+=i;
		
	}
	
	cout<<somma<<"";
	
	
	
	return 0;
}
