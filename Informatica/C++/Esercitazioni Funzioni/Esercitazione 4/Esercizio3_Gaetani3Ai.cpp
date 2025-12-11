/*Scambio di due variabili*/

#include <iostream>
using namespace std;

void scambia(int &a, int &b, int &c) //Passaggio dei valori per riferimento
{
    //Scambio di valori, viene usata una terza variabile c che viene inizializzata a 0 nel main
    //Uso una variabile vuota come variabile d'appoggio
    c = a; //La variabile vuota prende il valore di a
    a = b; //a assume il valore di b
    b = c; //b prende il valore di c, diventando a

    //Ovviamente, stamperemo solo a e b
}

int main(){
    int a = 0, b = 0, c = 0;

    //Presa in input e stampa in output dei valori prima della chiamata a funzionew
    cout<<"Inserisci il primo numero: ";
    cin>>a;
    cout<<"Ora la variabile a ha valore :"<<a<<endl;
    cout<<"Inserisci il secondo numero: ";
    cin>>b;
    cout<<"Ora la variabile b ha valore :"<<b<<endl;


    cout<<"Avviene lo scambio"<<endl;

    scambia(a, b, c); //Chiamata a funzione

    //Output dopo la chiamata a funzione
    cout<<"Ora la variabile a ha valore :"<<a<<endl;
    cout<<"Ora la variabile b ha valore :"<<b<<endl;


    return 0;
}
