import java.util.Scanner;

/*Crea un programma che chieda all'utente quanti voti inserire (N sarà il numero
di voti). Un voto ha
valore compreso tra 1 e 10.
Successivamente chiedere all'utente gli N voti e alla fine dell'inserimento il
programma restituirà
le seguenti statistiche:
- media dei voti inseriti
- valore minimo(voto più basso)
- valore massimo(voto più alto)*/

public class votiGaetani {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n;
        float voto, somma = 0, media, votoMinore = 0, votoMaggiore = 0;

        System.out.println("Inserisci il numero di voti ricevuti: ");
        n = scanner.nextInt();

        for(int i = 1; i <= n; i++)
        {
            System.out.println("Inserisci il voto n. " + i);
            voto = scanner.nextFloat();


            if(i == 1)
            {
                votoMinore = voto;
                votoMaggiore = voto;
            }
            else{
                if(voto < votoMinore)
                {
                    votoMinore = voto;
                }

                if(voto > votoMaggiore)
                {
                    votoMaggiore = voto;
                }
            }

            if(voto <= 10 && voto >= 1)
            {
                somma+=voto;

            }else{
                System.out.println("Hai inserito un voto non valido, un voto è compreso tra 1 e 10");
                i--;
            }
        }

        media = somma/n;

        System.out.println("La media dei voti è " + media);

        System.out.println("Il voto maggiore è " + votoMaggiore);

        System.out.println("Il voto minore è " + votoMinore);

    }
}