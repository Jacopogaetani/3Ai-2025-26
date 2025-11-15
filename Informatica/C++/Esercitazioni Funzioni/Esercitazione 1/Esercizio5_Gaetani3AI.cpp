//5. Scrivi una funzione media() che riceve tre numeri reali e restituisce la loro media.

#include <iostream>
using namespace std;


float media(float a, float b, float c)
{
    float media = ((a + b + c) / 3);
    cout<<"La media e' "<<media;
    return media;
}

int main()
{
    float num1, num2, num3;
    cout<<"Inserisci il primo numero: ";
    cin>>num1;
    cout<<"Inserisci il secondo numero: ";
    cin>>num2;
    cout<<"Inserisci il terzo numero: ";
    cin>>num3;

    media(num1, num2, num3);

    return 0;
}