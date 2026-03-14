package Palestra;

public class Main {
    public static void main(String[] args)
    {
        Palestra p1 = new Palestra("Virgin Active", 100, 100, true, 90);
        Palestra p2 = new Palestra("Pacco palestrina", 160, 90, true, 85);
        CentroSportivo c1 = new CentroSportivo("Centro Barca", 1900);

        p1.entraPersona();
        p1.escePersona();
        p1.chiudiPalestra();
        p1.apriPalestra();
        p1.aggiungiIscritto(5);
        System.out.println(p1.palestraPiena());
        p1.confrontaIscritti(p2);
        p1.confrontaCapienza(p2);
        System.out.println(p1.infoPalestra());

        System.out.println("\n ");

        p2.entraPersona();
        p2.escePersona();
        p2.chiudiPalestra();
        p2.apriPalestra();
        p2.aggiungiIscritto(10);
        System.out.println(p2.palestraPiena());
        p2.confrontaIscritti(p1);
        p2.confrontaCapienza(p1);
        System.out.println(p2.infoPalestra());

        System.out.println("\n ");

        c1.allenamento(p2);
        c1.allenamento(p1);
        c1.comunicaDati();






    }
}
