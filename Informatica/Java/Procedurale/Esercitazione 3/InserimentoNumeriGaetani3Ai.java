import java.util.Scanner;
/*Scrivi un programma che legge da tastiera una sequenza di numeri interi.
Il programma, a partire dal primo numero introdotto, stampa ogni volta la media
di tutti i numeri
introdotti.
Termina quando il numero inserito è negativo.*/
public class InserimentoNumeriGaetani3Ai {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float numero = 0, numeroValori = 0, somma = 0;
        float media;

        while(numero >= 0)
        {
            System.out.println("Inserisci un numero: ");
            numero = scanner.nextInt();
            if(numero >= 0)
            {
                numeroValori++;
                somma+=numero;

                media = somma/numeroValori;

                System.out.println("Media fin ora: " + media);
            }

        }

        System.out.println("È stato inserito un numero negativo.");

    }
}