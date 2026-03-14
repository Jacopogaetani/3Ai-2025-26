package Palestra;


import java.util.Scanner;

public class Palestra {
    public String nome;
    public int numeroIscritti, capacitaMassima, personeDentro;
    public boolean aperta;


    Scanner scanner = new Scanner(System.in);
    /*public Palestra(String nome, int capacitaMassima)
    {
        this("", 0, 0, true, 0);
    }*/

    public Palestra(String nome, int numeroIscritti, int capacitaMassima, boolean aperta, int personeDentro)
    {
        this.nome = nome;
        this.numeroIscritti = numeroIscritti;
        this.capacitaMassima = capacitaMassima;
        this.aperta = aperta;
        this.personeDentro = personeDentro;
    }

    public Palestra(String nome, int capacitaMassima)
    {
        this("", 0, 0, true, 0);
    }


    public int entraPersona()
    {
        if(aperta && personeDentro < capacitaMassima)
        {
            System.out.println("Benvenuto nella palestra " + nome);
            personeDentro++;

        }
        else if(!aperta){
            System.out.println("Spiacenti, la palestra " + nome + " è attualmente chiusa");
        }
        else{
            System.out.println("Abbiamo già raggiunto la capacità massima di " + capacitaMassima + " persone, ci scusiamo per il disagio");
        }

        System.out.println("Numero di persone attualmente dentro la palestra: " + personeDentro);
        return personeDentro;
    }

    public int escePersona()
    {
        if(personeDentro >= 1)
        {
            System.out.println("Arrivederci! Grazie per aver scelto la palestra " + nome);
            personeDentro--;
        }
        else{
            System.out.println("Non c'è nessuno! A dire di voler uscire sarà stato un fantasma...");
        }

        System.out.println("Numero di persone attualmente dentro la palestra: " + personeDentro);

        return personeDentro;
    }

    public boolean apriPalestra()
    {
        if(!aperta){
            System.out.println("Sono le ore 9:00! La palestra " + nome + " è felice di ospitarvi!" );
            aperta = true;
        }
        else{
            System.out.println("La palestra è già aperta");
        }

        return aperta;
    }

    public boolean chiudiPalestra()
    {
        if(aperta){
            System.out.println("Sono le ore 18:00! La palestra " + nome + " vi aspetta domani!" );
            aperta = false;
        }
        else{
            System.out.println("La palestra è già chiusa");
        }

        return aperta;
    }

    public int aggiungiIscritto(int numero)
    {
        numeroIscritti+=numero;
        System.out.println(numero + " Persone si sono iscritte nella nostra palestra! Benvenuti!");

        return numeroIscritti;
    }

    public String palestraPiena()
    {
        String messaggio;
        if(personeDentro == capacitaMassima)
        {
            messaggio = "La palestra ha attualmente raggiunto la capacità massima di " + capacitaMassima + " persone";
        }
        else{
            messaggio = "La palestra non ha ancora raggiunto la capacità massima di " + capacitaMassima + " persone";
        }

        return messaggio;
    }

    public void confrontaIscritti(Palestra p)
    {
        if(this.numeroIscritti > p.numeroIscritti)
        {
            System.out.println("La palestra " + this.nome + " ha più iscritti rispetto alla palestra " + p.nome);

        }
        else if(this.numeroIscritti < p.numeroIscritti)
        {
            System.out.println("La palestra " + this.nome + " ha meno iscritti rispetto alla palestra " + p.nome);
        }
        else{
            System.out.println("La palestra " + this.nome + " ha lo stesso numero di iscritti rispetto alla palestra " + p.nome);
        }
    }

    public void confrontaCapienza(Palestra p)
    {
        if(this.capacitaMassima > p.capacitaMassima)
        {
            System.out.println("La palestra " + this.nome + " è più ampia rispetto alla palestra " + p.nome);

        }
        else if(this.capacitaMassima < p.capacitaMassima)
        {
            System.out.println("La palestra " + this.nome + " è meno ampia rispetto alla palestra " + p.nome);
        }
        else{
            System.out.println("La palestra " + this.nome + " può ospitare lo stesso numero di persone rispetto alla palestra " + p.nome);
        }
    }

    public String infoPalestra()
    {
        return "La palestra " + nome + " ha attualmente " + numeroIscritti + " iscritti e " + personeDentro + " persone che si stanno attualmente allenando. La palestra può ospitare fino a " + capacitaMassima + " persone. Stato apertura: " + aperta;
    }


}
