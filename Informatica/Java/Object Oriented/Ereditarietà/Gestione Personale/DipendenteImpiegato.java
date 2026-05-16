package Personale;

public class DipendenteImpiegato extends Personale{
    private int codiceFiscale;
    private float retribuzioneMensile, bonus;

    public DipendenteImpiegato(String nome, String cognome, int telefono, String indirizzo, float quotaFissa, int codiceFiscale, float bonus, float retribuzioneMensile) {
        super(nome, cognome, telefono, indirizzo, quotaFissa);
        this.codiceFiscale = codiceFiscale;
        this.bonus = bonus;
        this.retribuzioneMensile = retribuzioneMensile;
    }

    public float getBonus() {
        return bonus;
    }

    public void setBonus(float bonus) {
        this.bonus = bonus;
    }

    public float getRetribuzioneMensile() {
        return retribuzioneMensile;
    }

    public void setRetribuzioneMensile(float retribuzioneMensile) {
        this.retribuzioneMensile = retribuzioneMensile;
    }

    public int getCodiceFiscale() {
        return codiceFiscale;
    }

    public void setCodiceFiscale(int codiceFiscale) {
        this.codiceFiscale = codiceFiscale;
    }

    public float gratifica(float x)
    {
        bonus+=x;
        return bonus;
    }

    public void stampaDati()
    {
        System.out.println("Il dipendente impiegato " + getNome() + " " + getCognome() + " ha una retribuzione mensile di " + retribuzioneMensile + " con un bonus di " + bonus);
    }

    public float paga()
    {
        float paga = retribuzioneMensile + bonus + getQuotaFissa();
        bonus = 0;
        return paga;
    }
}
