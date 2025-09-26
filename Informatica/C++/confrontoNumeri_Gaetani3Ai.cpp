/*
Scrivi un programma in C++ che:
1. Legga due numeri interi a e b.
2. Stampa:
○ "Il numero maggiore è a" se a > b.
○ "Il numero maggiore è b" se b > a.
○ "I numeri sono uguali" se a == b.
3. Chieda all’utente se intende svolgere un nuovo confronto*/ 

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    bool confermaNuovoConfronto;
    int inputNuovoConfronto;
    do{
        cout<<"Inserisci a: ";
        cin>>a;
        cout<<"Inserisci b: ";
        cin>>b;

        if (a > b)
        {
            cout<<"Il numero maggiore è a"<<endl;
        }
        else if(a < b)
        {
            cout<<"Il numero maggiore è b"<<endl;
        }
        else if(a == b)
        {
            cout<<"I numeri sono uguali"<<endl;

        }
        cout<<"Vuoi svolgere un nuovo confronto? [1/0]";
        cin>>inputNuovoConfronto;
        
        if (inputNuovoConfronto = 1)
        {
            confermaNuovoConfronto = true;
        }
        else if (inputNuovoConfronto = 0){
            cout<<"Non vuoi svolgere un nuovo confronto"<<endl;
            confermaNuovoConfronto = false;
        }
    }while(confermaNuovoConfronto = true);
    

    cout<<"Termine esecuzione"<<endl;

    return 0;
}