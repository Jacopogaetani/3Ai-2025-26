//Far scegliere il numero di facce di un dado all’utente e lanciare il dado con quelle facce.

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    int n;

    srand(time(0));

    cout<<"Inserisci il numero di facce del dado da tirare: ";
    cin>>n;

    int roll = rand()%n+1;

    cout<<"Tiri un dado a "<<n<<" facce... \n Ecco che si sta per fermare... \nHai fatto "<<roll<<endl;




    return 0;
}