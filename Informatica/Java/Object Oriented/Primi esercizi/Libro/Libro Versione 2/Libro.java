package Libro;

/*Creare una classe Libro caratterizzata dai seguenti attributi:
● titolo, che rappresenta il titolo del libro
● numeroPrestiti, che rappresenta il numero di volte in cui il libro è
stato prestato
● disponibile, che indica se il libro è disponibile o meno
Andranno previsti due costruttori parametrici:
● uno che riceve in ingresso il titolo del libro;
● l’altro che riceve in ingresso il titolo del libro, il numero prestiti e la
disponibilità.
DOVE POSSIBILE USARE THIS NEL COSTRUTTORE
La classe Libro avrà i seguenti metodi:
● prestaLibro(): se il libro è disponibile aumenta il numero di prestiti e
imposta il libro come non disponibile;
● restituisciLibro(): imposta il libro come disponibile;
● aggiungiPrestiti(int numero): aggiunge numero al numero prestiti;
● confrontaPrestiti(Libro l): confronta i prestiti di due libri diversi e
stampa se il primo libro ha il maggior numero, il minor numero o
uguale numero di prestiti rispetto al secondo;
● dammiInfo(): restituisce una stringa contenente il titolo del libro, il
numero di prestiti effettuati, lo stato di disponibilità del libro.
*/


public class Libro {
    public String nome;
    public int numeroPrestiti;
    public boolean disponibile;

    public Libro(String nome)
    {
        this(nome, 0, true);

    }

    public Libro(String nome, int numeroPrestiti, boolean disponibile){
        this.nome=nome;
        this.numeroPrestiti = numeroPrestiti;
        this.disponibile = disponibile;
    }

    public void prestaLibro()
    {
        if(disponibile)
        {
            System.out.println("Ecco a te il libro " + nome + "!\n");
            numeroPrestiti++;
            disponibile = false;
        }else{
            System.out.println("Non è possibile prestare il libro, non è disponibile :(\n");
        }
    }

    public void restituisciLibro()
    {
        if(!disponibile)
        {
            System.out.println("Grazie per averci restiutito il libro " +nome);
            disponibile = true;
        }else{
            System.out.println("Non puoi restituire un libro che non hai mai preso in prestito\n");
        }

    }

    public int aggiungiPrestiti(int prestiti)
    {
        System.out.println(prestiti + "prestiti sono stati aggiunti per il libro " + this.nome);
        numeroPrestiti+=prestiti;
        return numeroPrestiti;
    }

    public void confrontaLibri(Libro l)
    {
        if(this.numeroPrestiti > l.numeroPrestiti)
        {
            System.out.println(this.nome + " ha più prestiti rispetto a " + l.nome);
        }
        else if(this.numeroPrestiti < l.numeroPrestiti)
        {
            System.out.println(l.nome + " ha più prestiti rispetto a " + this.nome);
        }
        else{
            System.out.println(this.nome + " ha lo stesso numero di prestiti del libro " + l.nome);
        }
    }


    public String dammiInfo()
    {
        return "Nome libro: " + this.nome + "\nNumero di prestiti: " + this.numeroPrestiti + "\nStato disponibilità: " + this.disponibile;
    }



}
