package Squadre;

public class Main {
    public static void main(String[] args)
    {
        //Creazione dei due oggetti
        Squadra lecce = new Squadra("Lecce", 5, 3, 1); //Costruttore parametrico
        Squadra inter = new Squadra(); //Costruttore di default

        //Invocazione metodi squadra lecce
        lecce.aggiorna();
        System.out.println(lecce.punti());
        //lecce.inizioAnno();
        //System.out.println(lecce.punti());

        //Passaggio dei parametri squadra Inter
        inter.nomeSquadra = "Inter";
        inter.partiteVinte = 4;
        inter.partitePerse = 3;
        inter.pareggi = 2;

        inter.aggiorna();
        System.out.println(inter.punti());
        //inter.inizioAnno();
        //System.out.println(inter.punti());

        //Confronto punti
        if(lecce.punti > inter.punti)
        {
            System.out.println("La squadra " + lecce.nomeSquadra + " ha più punti in classifica della squadra " + inter.nomeSquadra);
        }else{
            System.out.println("La squadra " + inter.nomeSquadra + " ha più punti in classifica della squadra " + lecce.nomeSquadra);
        }

    }
}
