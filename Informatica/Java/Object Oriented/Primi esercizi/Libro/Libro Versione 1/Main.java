package Libro;

public class Main {
    public static void main(String[] args)
    {
        Libro l1 = new Libro("Le barzellette di Francesco Totti", 15, true);
        Libro l2 = new Libro("Chuck Norris ha un armadio nello scheletro e altri cinquecento nuovissimi fatti ispirati al ranger più famoso del mondo", 10, true);
        Biblioteca b1 = new Biblioteca("S.T Biblioteca", 100);
        Biblioteca b2 = new Biblioteca("Biblioteca del mare", 50);
        //Giorno 1 - Chiamata dei metodi
        System.out.println("--Giorno 1-- \n ");
        b1.effettuaPrestiti(l2);
        System.out.println(l2.dammiInfo());
        System.out.println(b1.comunicaDati());
        b2.effettuaPrestiti(l1);
        System.out.println(l1.dammiInfo());
        l1.prestaLibro();
        l2.prestaLibro();
        System.out.println(l1.dammiInfo());
        l2.restituisciLibro();
        l1.restituisciLibro();
        l1.aggiungiPrestiti(3);
        System.out.println(l1.dammiInfo());
        l1.confrontaLibri(l2);

        //Giorno 2
        System.out.println("--Giorno 2--");
        l1.prestaLibro();
        l2.aggiungiPrestiti(5);
        l1.restituisciLibro();
        l2.prestaLibro();
        System.out.println(l1.dammiInfo());
        l2.restituisciLibro();
        l1.restituisciLibro();
        System.out.println(l2.dammiInfo());
        l2.restituisciLibro();
        l2.confrontaLibri(l1);
    }
}
