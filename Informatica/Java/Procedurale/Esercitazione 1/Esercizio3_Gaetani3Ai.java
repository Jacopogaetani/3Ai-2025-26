/*Il costo di un’automobile è di € 27.000. L’acquirente versa inizialmente un
anticipo di € 5000 e all’atto della consegna una cifra pari al doppio
dell’anticipo. Successivamente paga per ogni mese una rata da 300 €.
Calcolare e comunicare il numero di mesi necessario per estinguere il debito.
(N.B: non servono cicli)*/

public class Esercizio3_Gaetani3Ai {
    public static void main(String[] args)
    {
        int costo = 27000, anticipo = 5000, consegna = 5000 * 2, totaleConsegna = anticipo + consegna, rata = 300, restante = costo - totaleConsegna, mesi = restante / rata;

        System.out.println("Vengono impiegati " + mesi + " mesi per saldare il costo della macchina");
    }
}
