package Ereditarieta;

import java.time.LocalDate;

public class Persona {
    public String nome, cognome, residenza;
    public int annoDiNascita, codiceFiscale, eta;

    public int annoCorrente = LocalDate.now().getYear();
    public Persona(String nome, String cognome, String residenza, int annoDiNascita, int codiceFiscale)
    {
        this.nome = nome;
        this.cognome = cognome;
        this.residenza = residenza;
        this.annoDiNascita = annoDiNascita;
        this.codiceFiscale = codiceFiscale;
        this.eta = annoCorrente - annoDiNascita;
    }

    public String presentati()
    {
        return "Ciao sono " + nome + " " + cognome + " e ho " + eta + " anni";
    }

    public int eta()
    {
        return eta;
    }

    public boolean maggiorenne()
    {
        if(this.eta >= 18)
        {
            System.out.println(this.nome + " è maggiorenne");
            return true;
        }
        System.out.println(this.nome + " non è maggiorenne");
        return false;
    }

}

