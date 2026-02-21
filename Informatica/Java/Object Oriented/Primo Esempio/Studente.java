package primoEsempio;

public class Studente {
    //Attributi
    String nome, cognome;
    int matricola, nVoti;
    float media;

    //Costruttore default
    public Studente() {
        nome = "Mario";
        cognome = "Rossi";
        matricola = 0;
        media = 0;
        nVoti = 0;
    }

    //Costruttore parametrico
    public Studente(String n, String c, int m)
    {
        nome = n;
        cognome = c;
        matricola = m;
        media = 0;
        nVoti = 0;
    }

    public String stampaInformazioni()
    {
        return "Nome: " + nome + "\nCognome: " + cognome + "\nMatricola: " + matricola + "\nMedia: " + media + "\nNumero di voti: " + nVoti + "\n";
    }



}
