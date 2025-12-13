//Far lanciare un dado a 20 facce 

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int roll = rand()%20+1;

    cout<<"Jacopo: Shui usa l'abilita' della sua katana, in grado di intrappolare i nemici in rami di fiori di ciliegio, il nemico deve superare una tiro salvezza su destrezza con classe di difficolta' 15"<<endl;
    cout<<"Cave: Va bene... tiro un d20"<<endl;

    if(roll >= 15)
    {
        cout<<"Cave lancia un d20, ed esce... "<<roll<<"\n*Cave che pensa: ha effetivamente superato il tiro... cosa faccio? * \n Cave: Mi dispiace, ho fatto 20, non riesci ad intrappolare un nemico"<<endl;
    }else{
        cout<<"Cave lancia un d20, ed esce... "<<roll<<"\nCave: Ho superato il tiro HAHAH. Non blocchi il nemico"<<endl;
    }



    return 0;
}