#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Inserisci un numero: "<<endl;
	cin>>n;
	
	if (n % 2 == 0)
	{
		cout<<n<< " e' divisibile per 2"<<endl;
	}
	if (n % 3 == 0)
	{
		cout<<n<< " e' divisibile per 3"<<endl;
	}
	if (n % 5 == 0)
	{
		cout<<n<< " e' divisibile per 5"<<endl;
	}
	if (n % 7 == 0)
	{
		cout<<n<< " e' divisibile per 7"<<endl;
	}
	
	return 0;
}
