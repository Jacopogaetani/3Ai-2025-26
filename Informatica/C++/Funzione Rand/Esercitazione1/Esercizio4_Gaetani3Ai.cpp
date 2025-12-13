//Far lanciare due dadi con 6 facce e dire se è uscita una coppia.

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
    srand(time(0));

    int roll1, roll2;

    cout<<"Lancio del primo d6"<<endl;
    roll1 = rand()%6+1;
    cout<<"e' uscito "<<roll1<<endl;

    cout<<"Lancio del asecondo d6"<<endl;
    roll2 = rand()%6+1;
    cout<<"e' uscito "<<roll2<<endl;

    if(roll1 == roll2){
        cout<<"Hai tirato "<<roll1<<"con entrambi i dadi.. Puoi uscire di prigione!!"<<endl;
    }
    return 0;
}