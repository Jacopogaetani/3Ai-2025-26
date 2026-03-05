package Cassa;

public class Main {
    public static void main(String[] args)
    {
        //Creazione oggetto giornata
        Cassa giornata = new Cassa(300);

        //Prima giornata
        giornata.acquisto(100f);
        giornata.acquisto(33f);
        System.out.println(giornata.comunicaDati());
        giornata.chiusuraCassa();

        //Seconda giornata
        giornata.acquisto(200f);
        giornata.acquisto(123f);
        giornata.acquisto(33f);
        System.out.println(giornata.comunicaDati());
        giornata.chiusuraCassa();



    }
}
