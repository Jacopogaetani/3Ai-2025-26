#include <iostream>
using namespace std;

int main()
{
	int n, numeri[4] = {2,3,5,7};\
	
	cout<<"Inserisci un numero: ";
	cin>>n;
	
	for (int i = 0; i<4; i++)
	{
		if (n % numeri[i] == 0)
		{
			cout<<"Il numero e' divisibile per "<<numeri[i]<<endl;
		}
		
	}
	
	
	
	return 0;
}
