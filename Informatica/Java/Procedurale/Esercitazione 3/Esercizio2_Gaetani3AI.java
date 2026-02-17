import java.util.Scanner;
/*Scrivi un programma che legge da tastiera una sequenza di numeri interi.
Il programma, a partire dal primo numero introdotto, stampa ogni volta la media
di tutti i numeri
introdotti.
Termina quando il numero inserito è negativo.*/
public class Esercizio2_Gaetani3AI {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int numeriDaInserire;
        float numero, mediaPari, mediaDispari, sommaPari = 0, sommaDispari = 0, valoriPari = 0, valoriDispari = 0, minore = 0;

        System.out.print("Inserisci il numero di valori da inserire: ");
        numeriDaInserire = scanner.nextInt();

        for(int i = 1; i <= numeriDaInserire; i++)
        {
            System.out.print("Inserisci il valore n. " + i + ": ");
            numero = scanner.nextFloat();

            if(i == 1)
            {
                minore = numero;
            }

            else
            {
                if(numero < minore)
                {
                    minore = numero;
                }
            }

            if(numero % 2 == 0)
            {
                sommaPari+=numero;
                valoriPari++;
            }

            else{
                sommaDispari+=numero;
                valoriDispari++;
            }

        }

        mediaPari = sommaPari/valoriPari;

        mediaDispari = sommaDispari/valoriDispari;

        System.out.println("La media dei numeri pari è " + mediaPari);
        System.out.println("La media dei numeri dispari è " + mediaDispari);

    }
}