/* In un condominio è stato messo a norma l’ascensore, l’ammontare che deve
pagare ciascun condomino dipende anche dal piano nel quale si trova
l’appartamento. Tale ammontare viene determinato nel seguente modo:
a. Quota base : una cifra fissa
b. la quota base viene incrementata in base al piano al quale si trova
l’appartamento secondo la seguente tabella
N° PIANO COMMISSIONE
Piano terra 0%
1 1.25%
2 1.55%
3 1.9%
4 2.20%
5 2.35%
Data la quota base e il numero del piano di appartenenza comunicare il totale
dovuto da un condomino*/


import java.util.Scanner;

public class Esercizio7_Gaetani3Ai {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        float quotaBase = 0, totale = 0;
        int piano = 0;

        System.out.println("Inserisci la quota base per il pagamento: ");
        quotaBase = scanner.nextFloat();

        System.out.println("Inserisci il piano: ");
        piano = scanner.nextInt();

        if(piano >= 1 && piano <= 5)
        {
            if(piano == 1)
            {
                totale = quotaBase * 1.25f;
            }
            else if(piano == 2)
            {
                totale = quotaBase * 1.55f;
            }
            else if(piano == 3)
            {
                totale = quotaBase * 1.9f;
            }
            else if(piano == 4)
            {
                totale = quotaBase * 2.20f;
            }
            else if(piano == 5)
            {
                totale = quotaBase * 2.35f;
            }

        }else{
            System.out.println("Non valido");

        }

        System.out.println(totale);
    }
}
