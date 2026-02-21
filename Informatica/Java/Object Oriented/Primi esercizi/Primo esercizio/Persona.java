package primoEsempio;

import java.time.LocalDate;

public class Persona {
    String nome, cognome;
    int annoNascita, eta;

    public Persona(){
        nome = "";
        cognome = "";
        annoNascita = 0;
        eta = 0;
    }

    public int caclcolaEta()
    {
        int annoCorrente = LocalDate.now().getYear();
        eta = annoCorrente - annoNascita;
        return eta;
    }

    public String presentati()
    {
        return "Ciao, mi chiamo " + nome + " " + cognome + " e ho " +  eta + " anni \n";
    }

    public String maggiorenne()
    {
        if(eta >= 18)
        {
            return "Sono maggiorenne \n";
        }
        else{
            return "Non sono maggiorenne \n";
        }
    }
}
