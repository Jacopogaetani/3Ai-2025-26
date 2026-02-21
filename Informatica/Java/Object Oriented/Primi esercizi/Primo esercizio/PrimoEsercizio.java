package primoEsempio;

import java.util.Scanner;
import java.time.LocalDate;

public class PrimoEsercizio {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Persona p1 = new Persona();
        Persona p2 = new Persona();
        Persona p3 = new Persona();

        System.out.print("PRIMA PERSONA: \nInserisci il tuo nome: ");
        p1.nome = scanner.next();
        System.out.print("Inserisci il tuo cognome: ");
        p1.cognome = scanner.next();
        System.out.print("Inserisci il tuo anno di nascita: ");
        p1.annoNascita = scanner.nextInt();
        p1.caclcolaEta();

        System.out.print("SECONDA PERSONA: \nInserisci il tuo nome: ");
        p2.nome = scanner.next();
        System.out.print("Inserisci il tuo cognome: ");
        p2.cognome = scanner.next();
        System.out.print("Inserisci il tuo anno di nascita: ");
        p2.annoNascita = scanner.nextInt();
        p2.caclcolaEta();

        System.out.print("TERZA  PERSONA: \nInserisci il tuo nome: ");
        p3.nome = scanner.next();
        System.out.print("Inserisci il tuo cognome: ");
        p3.cognome = scanner.next();
        System.out.print("Inserisci il tuo anno di nascita: ");
        p3.annoNascita = scanner.nextInt();
        p3.caclcolaEta();


        System.out.println(p1.presentati());
        System.out.println(p1.maggiorenne());

        System.out.println(p2.presentati());
        System.out.println(p2.maggiorenne());

        System.out.println(p3.presentati());
        System.out.println(p3.maggiorenne());
    }
}
