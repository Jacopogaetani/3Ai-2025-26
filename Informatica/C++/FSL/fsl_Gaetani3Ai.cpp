/*Scrivi un programma che analizzi le frequenze dei numeri che escono dal lancio
di due dadi a 6 facce
Per fare ciò:
1. simula il lancio di due dadi distinti. Calcola la somma dei due valori usciti
(es. Dado 1 = 3, Dado 2 = 5 → Somma = 8).
2. Esegui questa operazione per un numero elevato di tentativi, ad esempio
N=200 volte.
3. Tieni traccia di quante volte esce ogni possibile somma (es. memorizzala
in un vettore)
4. Stampa il vettore così ottenuto
5. Calcolare e stampare per ogni somma anche la frequenza relativa e la
percentuale rispetto al numero totale di lanci. (La frequenza relativa è il
rapporto tra la frequenza assoluta di un evento e il numero totale delle
osservazioni).*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;



int main()
{
    srand(time(0));

    const int DIM = 12;
    int tentativi = 200, a, b;
    int somma = 0;
    float frequenzeAssolute[DIM] = {0};
    float frequenzeRelative[DIM] = {0};

    for (int i = 0; i < tentativi; i++)
    {
        a = rand()%6+1;
        b = rand()%6+1;
        somma = a + b;

        frequenzeAssolute[somma]++;
    }

    for(int i = 0; i <= DIM; i++)
    {
        if(i >= 2 && i <= 12)
        {
            cout<<i<<" e' uscito "<<frequenzeAssolute[i]<<" volte"<<endl;
        }

    }
    for(int i = 0; i <= DIM; i++)
    {
        if(i >= 2 && i <= 12)
        {
            frequenzeRelative[i] = frequenzeAssolute[i] / tentativi;
            cout<<"La frequenza relativa di "<<i<<" e' di "<<frequenzeRelative[i]<<" Con una percentuale di "<<frequenzeRelative[i] * 100<<" percento"<<endl;
        }
    }    
    return 0;   
}