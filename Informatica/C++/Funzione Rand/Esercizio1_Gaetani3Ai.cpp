//Far lanciare un dado a 6 facce e dire cosa è uscito.

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int roll = rand()%6+1;

    cout<<"Tiri un dado a 6 facce... \nEcco che si sta fermando... \nE hai tirato un... "<<roll<<endl;




    return 0;
}