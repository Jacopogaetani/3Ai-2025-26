package Personale;

public class Personale {
    //Superclasse

    //Attributi privati
    private String nome, cognome, indirizzo;
    private int telefono;
    private float quotaFissa; //quota di retribuzione

    //Costruttore classe padre
    public Personale(String nome, String cognome, int telefono, String indirizzo, float quotaFissa) {
        this.nome = nome;
        this.cognome = cognome;
        this.telefono = telefono;
        this.indirizzo = indirizzo;
        this.quotaFissa = quotaFissa;
    }

    //Get e set
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCognome() {
        return cognome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public String getIndirizzo() {
        return indirizzo;
    }

    public void setIndirizzo(String indirizzo) {
        this.indirizzo = indirizzo;
    }

    public int getTelefono() {
        return telefono;
    }

    public void setTelefono(int telefono) {
        this.telefono = telefono;
    }

    public float getQuotaFissa() {
        return quotaFissa;
    }

    public void setQuotaFissa(float quotaFissa) {
        this.quotaFissa = quotaFissa;
    }

    //Metodo di cui verrà fatto override
    public void stampaDati()
    {
        System.out.println("Il dipendente " + nome + " " + cognome + " " + " con numero di telefono " + telefono + " ha una retribuzione fissa di " + quotaFissa);
    }

    //Metodo di cui verrà fatto override
    public float paga()
    {
        return quotaFissa;
    }


}
