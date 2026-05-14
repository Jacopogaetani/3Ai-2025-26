package Supermercato;

public class Prodotto {
    private int codiceBarre;
    private String  descrizioneBreve;
    private float prezzoUnitario, prezzoScontato;

    public Prodotto(int codiceBarre, String descrizioneBreve, float prezzoUnitario) {
        this.codiceBarre = codiceBarre;
        this.descrizioneBreve = descrizioneBreve;
        this.prezzoUnitario = prezzoUnitario;
        this.prezzoScontato = prezzoUnitario;
    }

    public int getCodiceBarre() {
        return codiceBarre;
    }

    public void setCodiceBarre(int codiceBarre) {
        this.codiceBarre = codiceBarre;
    }

    public String getDescrizioneBreve() {
        return descrizioneBreve;
    }

    public void setDescrizioneBreve(String descrizioneBreve) {
        this.descrizioneBreve = descrizioneBreve;
    }

    public float getPrezzoUnitario() {
        return prezzoUnitario;
    }

    public void setPrezzoUnitario(float prezzoUnitario) {
        this.prezzoUnitario = prezzoUnitario;
    }

    public float getPrezzoScontato() {
        return prezzoScontato;
    }

    public void setPrezzoScontato(float prezzoScontato) {
        this.prezzoScontato = prezzoScontato;
    }

    public float applicaSconto()
    {
        this.prezzoScontato = prezzoUnitario - ((prezzoUnitario  * 5) / 100);
        System.out.println("Il prodotto " + this.getDescrizioneBreve() + " riceve uno sconto del 5% e il suo prezzo passa a " + this.prezzoScontato + " euro")
        return prezzoScontato;
    }

    public String stampa()
    {
        return "Prodotto: " + descrizioneBreve + " con codice a barre "  + codiceBarre;
    }

}
