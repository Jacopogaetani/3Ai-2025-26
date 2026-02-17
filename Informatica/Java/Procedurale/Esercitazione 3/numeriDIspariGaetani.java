import java.util.Scanner;

/*Scrivere un programma che si compone di due parti:
Nella prima parte si chiede di inserire una serie di numeri e il programma li
somma solo se sono
dispari. Si interrompe l'immissione quando la somma raggiunge o supera il
valore 100
stampando il valore finale.
Nella seconda parte il programma chiede in ingresso un numero finché non si
inserisce un
numero dispari.
Quando questo avviene, il programma termina scrivendo quanti numeri pari
erano stati inseriti in
precedenza.
Chiamare il progetto e il file .java "NumeriDispariCognome"*/

public class numeriDIspariGaetani {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int somma = 0, numero, numeriDispari = 0;

        while(somma < 100)
        {
            System.out.println("Inserisci un numero");
            numero = scanner.nextInt();

            if(numero % 2 != 0)
            {
                System.out.println(numero + " è un numero dispari");
                somma+=numero;
                numeriDispari++;
            }
            else{
                System.out.println(numero + " è un numero dispari");
            }

            System.out.println(somma);
        }


       for(int i = 0; i < numeriDispari; i++)
       {
           System.out.println("Inserisci nuovamente un numero: ");
           numero = scanner.nextInt();
       }

        System.out.println("Hai inserito esattamente " + numeriDispari + ", come prima");

    }




}