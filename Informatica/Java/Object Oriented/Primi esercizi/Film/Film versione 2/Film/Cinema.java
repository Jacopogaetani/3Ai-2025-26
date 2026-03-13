package Film;

public class Cinema {
    public String nomeCinema;
    public int numeroProiezioni;

    public Cinema(String nomeCinema, int numeroProiezioni)
    {
        this.nomeCinema = nomeCinema;
        this.numeroProiezioni = numeroProiezioni;
    }

    public int proiettaFilm(Film f)
    {
        f.guardaFilm();
        numeroProiezioni++;
        return numeroProiezioni;
    }

    public String comunicaDati()
    {
        return "Il cinema " + nomeCinema + " ha " + numeroProiezioni + " proiezioni";
    }
}
