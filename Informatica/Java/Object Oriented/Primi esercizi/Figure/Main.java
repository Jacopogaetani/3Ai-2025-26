package Figure;

public class Main {
    public static void main(String[] args)
    {
        Cerchio c1 = new Cerchio( 2.13f, "Cerchio 1");
        Cerchio c2 = new Cerchio( 13.16f, "Cerchio 2");
        Cerchio c3 = new Cerchio( 5.0f, "Cerchio 3");

        System.out.println(c1.stampaInformazioni());
        System.out.println(c2.stampaInformazioni());
        System.out.println(c3.stampaInformazioni());

        Quadrato q1 = new Quadrato();
        Quadrato q2 = new Quadrato();
        Quadrato q3 = new Quadrato();

        q1.nome = "Quadrato 1";

    }
}
