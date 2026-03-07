package Libro;


public class Biblioteca {
    public String nomeBiblioteca;
    public int numeroLibriPrestati;

    public Biblioteca(String nomeBiblioteca, int numeroLibriPrestati)
    {
        this.nomeBiblioteca = nomeBiblioteca;
        this.numeroLibriPrestati = numeroLibriPrestati;
    }

    public int effettuaPrestiti(Libro l)
    {
        l.prestaLibro();
        numeroLibriPrestati++;
        return numeroLibriPrestati;
    }

    public String comunicaDati()
    {
        return"Nome biblioteca: " + nomeBiblioteca + " numeroLibriPrestati: " + numeroLibriPrestati;
    }



}
