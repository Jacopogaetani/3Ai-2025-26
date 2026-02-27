package Figure;
//Pacchetto figure

public class Main {
    public static void main(String[] args)
    {
        //Creazione di 3 oggetti per classe

        //Oggetti cerchio
        Cerchio c1 = new Cerchio( 2.13f, "Cerchio 1");
        Cerchio c2 = new Cerchio( 13.16f, "Cerchio 2");
        Cerchio c3 = new Cerchio( 5.0f, "Cerchio 3");

        //Stampa del metodo stampa informazioni
        System.out.println(c1.stampaInformazioni());
        System.out.println(c2.stampaInformazioni());
        System.out.println(c3.stampaInformazioni());

        Quadrato q1 = new Quadrato();
        Quadrato q2 = new Quadrato(15.89f, "Quadrato 2");
        Quadrato q3 = new Quadrato(17.00f, "Quadrato 3");

        q1.nome = "Quadrato 1";
        q1.lato = 16f;

        System.out.println(q1.stampaInformazioni());
        System.out.println(q2.stampaInformazioni());
        System.out.println(q3.stampaInformazioni());

        Rettangolo r1 = new Rettangolo(12.89f, 34.90f, "Rettangolo 1");
        Rettangolo r2 = new Rettangolo(15.6f, 17.9f, "Rettangolo 2");
        Rettangolo r3 = new Rettangolo(20.9f, 12.6f, "Rettangolo 3");

        System.out.println(r1.stampaInformazioni());
        System.out.println(r2.stampaInformazioni());
        System.out.println(r3.stampaInformazioni());

        Triangolo t1 = new Triangolo(19.80f, 12.89f, 13.40f, 5.0f, "Triangolo 1");
        Triangolo t2 = new Triangolo(21.30f, 30.4f, 23.32f, 10.0f, "Triangolo 2");
        Triangolo t3 = new Triangolo(32.80f, 12.89f, 6.40f, 9.0f, "Triangolo 3");

        System.out.println(t1.stampaInformazioni());
        System.out.println(t1.stampaInformazioni());
        System.out.println(t1.stampaInformazioni());



    }
}
