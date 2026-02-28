package Squadre;

public class Squadra {
    //Attributi classe
    public String nomeSquadra;
    public int partiteVinte, partitePerse, pareggi, punti = 0;

    //Costruttore di default
    public Squadra(){
        nomeSquadra = "";
        partiteVinte = 0;
        partitePerse = 0;
        pareggi = 0;
    }

    //Costruttore parametrico
    public Squadra(String nome, int vinte, int perse, int partitePareggiate)
    {
        nomeSquadra = nome;
        partiteVinte = vinte;
        partitePerse = perse;
        pareggi = partitePareggiate;
    }


    //Aggiornamento del punteggio
    public void aggiorna()
    {
           punti = (partiteVinte * 3) + pareggi;
    }

    //Stampa del punteggio
    public String punti()
    {
        return "Punti squadra " + nomeSquadra + ": " + punti;
    }

    //Azzeramento del punteggio
    public void inizioAnno()
    {
        System.out.println("Inizia un nuovo campionato per la squadra " + nomeSquadra + "!");
        partitePerse = 0;
        partiteVinte = 0;
        pareggi = 0;
        aggiorna();
    }





}
