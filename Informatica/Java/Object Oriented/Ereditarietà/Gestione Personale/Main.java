package Personale;

public class Main {
    public static void main(String[] args)
    {
        Volontario v1 = new Volontario("Mario", "Rossi", 1234, "Via rossi 4", 100);
        Volontario v2 = new Volontario("Giulio", "Verdi", 5678, "Via verdi 4", 200);

        v1.stampaDati();
        v2.stampaDati();

        System.out.println("Paga primo volontario" + v1.paga());
        System.out.println("Paga secondo volontario " + v1.paga());

        DipendenteGiornaliero g1 = new DipendenteGiornaliero("Mattia", "Bianchi", 1356, "Via delle rose", 300, 0001, 50);
        DipendenteGiornaliero g2 = new DipendenteGiornaliero("Giulia", "Rossi", 1122, "Via dei caduti", 350, 0010,60);

        g1.stampaDati();
        g2.stampaDati();

        g1.giorni(31);
        System.out.println("Paga primo dipendente giornaliero " + g1.paga());

        g2.giorni(31);
        System.out.println("Paga secondo dipendente giornaliero " + g2.paga());

        DipendenteImpiegato i1 = new DipendenteImpiegato("Alessandra", "Shima - San", 345, "b2", 500, 1234, 60, 3000);
        DipendenteImpiegato i2 = new DipendenteImpiegato("Valentina", "Yu - chan", 345, "b1", 400, 1234, 100, 2500);

        i1.gratifica(30);
        i2.gratifica(15);

        System.out.println("Paga primo dipendente impiegato " + i1.paga());
        System.out.println("Paga secondo dipendente impiegato " + i2.paga());

        g1.giorni(31);
        g2.giorni(31);



        i1.setBonus(60);
        i2.setBonus(100);
        i1.gratifica(30);
        i2.gratifica(15);

        ListaDipendenti lista = new ListaDipendenti();
        lista.aggiungiDipendente(v1);
        lista.aggiungiDipendente(v2);
        lista.aggiungiDipendente(g1);
        lista.aggiungiDipendente(g2);
        lista.aggiungiDipendente(i1);
        lista.aggiungiDipendente(i2);

        System.out.println(lista.pagaTotale());



    }
}
