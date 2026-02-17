/*In un porto turistico possono attraccare imbarcazioni fino a 20 metri. Le
tariffe giornaliere sono le seguenti:
15€, fino a 5 m.
22€, fino a 12 m.
30€, fino a 15 m.
45€, oltre 15 m.
Conoscendo la dimensione di una barca e il n. di giorni di permanenza
calcolare il costo totale dell’ormeggio.
*/

import java.util.Scanner;

public class Esercizio6_Gaetani3Ai {

    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int giorni, lunghezza, tariffaGiornaliera = 0, tariffaTotale;

        System.out.println("Inserisci il numero di giorni: ");
        giorni = scanner.nextInt();
        System.out.println("Inserisci la lunghezza dell'imbarcazione: ");
        lunghezza = scanner.nextInt();

        if(lunghezza <= 20)
        {
           if(lunghezza <= 5 && lunghezza >= 1)
           {
               tariffaGiornaliera = 15;
           }
           else if(lunghezza > 5 && lunghezza <=12)
           {
               tariffaGiornaliera = 22;
           }
           else if(lunghezza > 12 && lunghezza <=15)
           {
               tariffaGiornaliera = 30;
           }
           else{
               tariffaGiornaliera = 40;
           }
        }
        else{
            System.out.println("Possono solo attraccare imbarcazioni sotto i 20m");
        }

        tariffaTotale = tariffaGiornaliera * giorni;

        System.out.println("La tariffa giornaliera è di " + tariffaTotale);
    }
}
