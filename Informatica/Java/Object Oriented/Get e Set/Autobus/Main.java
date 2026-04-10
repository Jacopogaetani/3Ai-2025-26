package Autobus;

public class Main {
    public static void main()
    {
        Autobus a1 = new Autobus("Calderara - Padulle", 0, 2.50f);
        Autobus a2 = new Autobus("Via Andreini", 0, 3.0f);

        a1.setPostiDisponibili(100);
        a2.setPostiDisponibili(200);

        a1.aggiornaDati("Sala Bolognese", 80,  100, 5.0f);
        a1.prenotazione(30);
        a1.prenotazione(15);
        System.out.println(a1.getNumeroPosti());
        System.out.println(a1.getPostiDisponibili());
    }
}
