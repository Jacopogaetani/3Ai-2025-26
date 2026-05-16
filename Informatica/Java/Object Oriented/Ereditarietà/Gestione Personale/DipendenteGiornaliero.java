package Personale;

//Sottoclasse di Personale
public class DipendenteGiornaliero extends Personale{
    //Attributi privati
    private int codiceFiscale;
    private float retribuzioneGiornaliera; //importo retribuzione giornaliera
    private int giorniLavorati;

    //Costruttore della superclasse richiamato con super
    public DipendenteGiornaliero(String nome, String cognome, int telefono, String indirizzo, float quotaFissa, int codiceFiscale, float retribuzioneGiornaliera) {
        super(nome, cognome, telefono, indirizzo, quotaFissa);
        this.codiceFiscale = codiceFiscale;
        this.giorniLavorati = 0;
        this.retribuzioneGiornaliera = retribuzioneGiornaliera;
    }

    //get e set
    public int getCodiceFiscale() {
        return codiceFiscale;
    }

    public void setCodiceFiscale(int codiceFiscale) {
        this.codiceFiscale = codiceFiscale;
    }

    public float getRetribuzioneGiornaliera() {
        return retribuzioneGiornaliera;
    }

    public void setRetribuzioneGiornaliera(float retribuzioneGiornaliera) {
        this.retribuzioneGiornaliera = retribuzioneGiornaliera;
    }

    public int getGiorniLavorati() {
        return giorniLavorati;
    }

    public void setGiorniLavorati(int giorniLavorati) {
        this.giorniLavorati = giorniLavorati;
    }

    public void giorni(int n)
    {
        giorniLavorati+=n;
    }

    public void stampaDati()
    {
        System.out.println("Il dipendente giornaliero " + getNome() + " " + getCognome() + " ha lavorato un totale di " + giorniLavorati + " giorni ed ha una retribuzione giornaliera di " + retribuzioneGiornaliera);
    }

    public float paga()
    {
        float paga = (retribuzioneGiornaliera * giorniLavorati) + getQuotaFissa();
        giorniLavorati = 0;
        return paga;
    }

}
