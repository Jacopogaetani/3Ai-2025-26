/*2. Lettura sequenza numeri fino a numero dispari
Scrivi un programma che legge una sequenza di numeri interi dall’utente, uno alla volta, e
termina la lettura non appena viene inserito un numero dispari.
Durante la lettura, il programma deve contare:
 Quanti numeri sono stati inseriti in totale (incluso il numero dispari che ha fermato la
lettura)
 Quanti fra i numeri inseriti sono diversi da zero
Alla fine, il programma deve stampare questi due valori.*/

#include <iostream>
using namespace std;

int main()
{
  int numeriLetti = 0, numeriDiversiDaZero = 0;
  int numero; 

  do{
   cout<<"Inserisci un numero: ";
   cin>>numero;
   if(numero != 0)
   {
     numeriDiversiDaZero++;
   }
   numeriLetti++;
  }while(numero % 2 == 0);
  
  cout<<numeriDiversiDaZero<<endl;
  cout<<numeriLetti<<endl;
  return 0;
}
