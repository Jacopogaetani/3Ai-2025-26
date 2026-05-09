package Ereditarieta;

public class Main {
    public static void main(String[] args)
    {
        Persona p1 = new Persona("Ren", "Amamiya", "Yogen-Yaga", 2009, 12345);
        Persona p2 = new Persona("Ren", "Amamiya", "Yogen-Yaga", 2008, 12345);
        Studente s1 = new Studente("Makoto", "Niijima", "Shibuya", 2007, 5678, 123, "Informatica", 30.0f);
        Studente s2 = new Studente("Riuji", "Sakamoto", "Shibuya", 2007, 1435, 456, "Lettere", 4.5f);
        Professore pf1 = new Professore("Sadayo", "Kawakami", "Tokyo", 1990, 11001, 10, "Lettere");
        Professore pf2 = new Professore("Pippo", "Kawakami", "Tokyo", 1990, 11001, 8, "Lettere");

        System.out.println(p1.presentati());
        System.out.println(s1.presentati());
        System.out.println(s2.presentati());
        System.out.println(pf1.presentati());

        System.out.println("\n");
        s1.maggiorenne();
        s2.maggiorenne();
        p1.maggiorenne();

        System.out.println("\n");
        s1.promosso();
        s2.promosso();

        System.out.println("\n");
        pf1.esperto();
        pf2.esperto();

        System.out.println("\n");
        System.out.println(s1.stampaInfo());
        System.out.println(s2.stampaInfo());


    }
}
