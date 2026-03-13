package Film;

public class Film {
    public String nome;
    public int numeroVisualizzazioni;
    public boolean disponibilita;

    public Film(String nome)
    {
        this("nome", 0, true);
    }

    public Film(String nome, int numeroVisualizzazioni, boolean disponibilita)
    {
        System.out.println("--" + nome + "--");
        this.nome = nome;
        this.numeroVisualizzazioni = numeroVisualizzazioni;
        this.disponibilita = disponibilita;
    }

    public void guardaFilm()
    {
        if(this.disponibilita)
        {
            System.out.println("Ecco il tuo biglietto, goditi il film " + nome);
            this.numeroVisualizzazioni++;
            this.disponibilita = false;
        }
        else{
            System.out.println("Spiacenti, il film " + nome + " non è attualmente disponibile");
        }
    }

    public void rendiDisponibile() {
        if(this.disponibilita)
        {
            System.out.println("Questo film è già disponibile");
        }
        else{
            System.out.println(nome + " è di nuovo disponibile!");
            this.disponibilita = true;
        }
    }

    public int aggiungiVisualizzazioni(int numero)
    {
        System.out.println(numero + " visualizzazioni sono state aggiunte al film " + nome);
        return numeroVisualizzazioni+=numero;
    }

    public void primaVisione()
    {
        boolean primaVisione;
        if(this.numeroVisualizzazioni < 1)
        {
            System.out.println("il film " + nome + " è in prima visione");
        }else{
            System.out.println("Stai vedendo una replica del film " + nome);
        }
    }

    public String confrontaFilm(Film f) {
        if(this.numeroVisualizzazioni > f.numeroVisualizzazioni)
        {
            return this.numeroVisualizzazioni + " ha pìù visualizzazioni del film " + f.numeroVisualizzazioni;
        }
        else if(this.numeroVisualizzazioni < f.numeroVisualizzazioni)
        {
            return this.numeroVisualizzazioni + " ha meno visualizzazioni del film " + f.numeroVisualizzazioni;
        }
        else{
            return this.numeroVisualizzazioni + " ha le stesse visualizzazioni del film " + f.numeroVisualizzazioni;
        }
    }

    public String visionInfo()
    {
        return "Il film " + nome + " ha " + numeroVisualizzazioni + " visualizzazioni. Disponibilità " + disponibilita;
    }
}
