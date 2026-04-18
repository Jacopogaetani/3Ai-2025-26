package Studente;

public class Main {
    public static void main(String[] args)
    {
        Studente s1 = new Studente("Jacopo", "Gaetani", 2009, 8.13f);
        Studente s2 = new Studente("Matteo", "Veronesi", 2007, 10.0f);
        Studente s3 = new Studente("Ren", "Amamiya", 2007, 7.13f);

        System.out.println(s1.stampaDati());
        System.out.println(s2.stampaDati());
        System.out.println(s3.stampaDati());

        if(s1.isMaggiorenne())
        {
            System.out.println("Lo studente " + s1.getNome() + " è maggiorenne");
        }
        else{
            System.out.println("Lo studente " + s1.getNome() + " non è maggiorenne");
        }

        if(s2.isMaggiorenne())
        {
            System.out.println("Lo studente " + s2.getNome() + " è maggiorenne");
        }
        else{
            System.out.println("Lo studente " + s2.getNome() + " non è maggiorenne");
        }

        if(s3.isMaggiorenne())
        {
            System.out.println("Lo studente " + s3.getNome() + " è maggiorenne");
        }
        else{
            System.out.println("Lo studente " + s3.getNome() + " non è maggiorenne");
        }

        System.out.println(Studente.studenteMigliore(s1, s2));
        System.out.println(Studente.studenteMigliore(s1, s3));
        System.out.println(Studente.studenteMigliore(s2, s3));

        System.out.println(Studente.stampaNumeroStudenti());
        System.out.println(Studente.getMediaGenerale());



    }

}
