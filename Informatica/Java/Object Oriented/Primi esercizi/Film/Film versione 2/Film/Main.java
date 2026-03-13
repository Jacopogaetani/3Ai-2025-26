package Film;

public class Main {
    public static void main(String[] args)
    {
        //Primo oggetto film
        Film film1 = new Film("Cars", 0, true);
        film1.guardaFilm();
        System.out.println(film1.visionInfo());
        film1.guardaFilm();
        film1.primaVisione();
        film1.rendiDisponibile();
        System.out.println(film1.visionInfo());
        film1.aggiungiVisualizzazioni(100);
        System.out.println(film1.visionInfo());

        //Secondo oggetto film
        Film film2 = new Film("Cars 2", 0, true);
        film2.guardaFilm();
        System.out.println(film2.visionInfo());
        film2.guardaFilm();
        film2.primaVisione();
        film2.rendiDisponibile();
        System.out.println(film2.visionInfo());
        film2.aggiungiVisualizzazioni(100);
        System.out.println(film2.visionInfo());

        //Primo oggetto cinema
        Cinema cinema1 = new Cinema("Uci cinemas", 100);
        cinema1.proiettaFilm(film1);
        cinema1.comunicaDati();

        //Secondo oggetto cinema;
        Cinema cinema2 = new Cinema("Stellar cinemas", 10);
        cinema2.proiettaFilm(film2);
        cinema2.comunicaDati();
    }
}
