/*Implemento a es. 6 e 7. funzione denominata analizza_numero che dato un numero n stampi se il numero è pari/dispari
e compreso/non compreso, la funzione restituisce 1 se il numero è pari e compreso, 0 in tutti gli altri casi*/

#include <iostream>
using namespace std;

bool isPari(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }else{
        return false;
    }
}

bool isCompreso(int a)
{
    if (a <= 100 && a >= 0)
    {
        return true;
    }else{
        return false;
    }
}

int analizzaNumero(bool a, bool b)
{
    if(a == true && b == true)
    {
        cout<<"Restituisco valore 1"<<endl;
        return 1;
    }else{
        cout<<"Restituisco valore 0"<<endl;
        return 0;
    }
}

int main()
{
    int n;
    cout<<"Inserisci un numero: ";
    cin>>n;

    bool pari = isPari(n);
    bool compreso = isCompreso(n);

    if(pari == true)
    {
        cout<<n<<" e' pari"<<endl;
    }else{
        cout<<n<<" non e' pari"<<endl;
    }

    if(compreso == true)
    {
        cout<<n<<" e' compreso tra 0 e 100"<<endl;
    }else{
        cout<<n<<" non e' compreso tra 0 e 100"<<endl;
    }

    int numeroAnalizzato = analizzaNumero(pari, compreso);

    return 0;

}