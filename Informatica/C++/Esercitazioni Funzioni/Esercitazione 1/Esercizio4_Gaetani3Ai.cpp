//4. Scrivi una funzione massimo() che restituisce il maggiore tra due numeri.

#include <iostream>
using namespace std;

int massimo(int a, int b)
{
    int massimo;
    if(a > b)
    {
        cout<<"Il massimo e' "<<a<<endl;
        massimo = a;
    }else{
        cout<<"Il massimo e' "<<b<<endl;
        massimo = b;
    }

    return massimo;
}

int main()
{
    int num1, num2;
    cout<<"Inserisci un numero: ";
    cin>>num1;
    cout<<"Inserisci un altro numero: ";
    cin>>num2;

    massimo(num1, num2);
    
    return 0;
}