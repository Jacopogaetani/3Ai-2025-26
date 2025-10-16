/*Dopo aver fatto inserire un numero naturale il programma restituisce in output da
quante cifre è composto il numero.
Suggerimento: Puoi dividere il numero per 10, più volte possibile, finché non arriva a
0, e contare quante volte lo fai.
Esempio: Prendiamo il numero 3481.
3481 ÷ 10 = 348
348 ÷ 10 = 34
34 ÷ 10 = 3
3 ÷ 10 = 0. Il numero ha 4 cifre.*/

#include <iostream>
using namespace std;

int main() {
    int n, cifre = 0;
    bool risultatoZero = false;

    cout<<"Inserisci un numero: ";
    cin>>n;

    while (risultatoZero == false) {
       if (n / 10 > 0) {
           n = n / 10;
           cifre++;
       }else {
           cifre++;
           risultatoZero = true;
       }
    }

    cout<<"Il numero ha "<<cifre<<" cifre";


    return 0;
}