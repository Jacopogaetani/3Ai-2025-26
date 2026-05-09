package Ereditarieta;

import java.security.PublicKey;

public class Studente extends Persona{
    public int matricola;
    public String corso;
    public float media;

    public Studente(String nome, String cognome, String residenza, int annoDiNascita, int codiceFiscale, int matricola, String corso, float media) {
        super(nome, cognome, residenza, annoDiNascita, codiceFiscale);
        this.matricola = matricola;
        this.corso = corso;
        this.media = media;
    }

    public String stampaInfo()
    {
        return "Matricola studente: " + matricola + " Corso frequentato: " + corso;

    }

    public boolean promosso()
    {
        if(media >= 18)
        {
            System.out.println("Lo studente/Studentessa " + this.nome + " è promosso/a");
            return true;
        }
        System.out.println("Lo studente/Studentessa " + this.nome + " non è promosso/a");
        return false;
    }

    public float aggiornaMedia(float nuovaMedia)
    {
        media = nuovaMedia;
        return media;
    }

    public String presentati()
    {
        return "Ciao sono " + nome + " " + cognome + " e studio " + corso;
    }
}
