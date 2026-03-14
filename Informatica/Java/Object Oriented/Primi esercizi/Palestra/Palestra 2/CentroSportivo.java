package Palestra;

public class CentroSportivo {
    public String nomeCentro;
    public int numeroAccessi;

    public CentroSportivo(String nomeCentro, int numeroAccessi)
    {
        this.nomeCentro = nomeCentro;
        this.numeroAccessi = numeroAccessi;
    }

    public void allenamento(Palestra p)
    {
        p.entraPersona();
        numeroAccessi++;
    }

    public String comunicaDati()
    {
        return "Il centro sportivo " + nomeCentro + " ha " + numeroAccessi + " accesi effettuati";
    }
}
