package Supermercato;

public class Alimentari extends Prodotto{
    private int giorniConservazione;

    public Alimentari(int codiceBarre, String descrizioneBreve, float prezzoUnitario, int giorniConservazione) {
        super(codiceBarre, descrizioneBreve, prezzoUnitario);
        this.giorniConservazione = giorniConservazione;
    }

    public int getGiorniConservazione() {
        return giorniConservazione;
    }

    public void setGiorniConservazione(int giorniConservazione) {
        this.giorniConservazione = giorniConservazione;
    }

    public String stampa()
    {
        return "Prodotto: " + getDescrizioneBreve() + " con codice a barre "  + getCodiceBarre() + " giorni di conservazione: " + giorniConservazione;
    }

    public float scontoGiorniConservazione()
    {
        if(giorniConservazione >=  4)
        {
            setPrezzoScontato(getPrezzoUnitario() -  (getPrezzoUnitario()* 5)/100);
            return getPrezzoScontato();
        }
        else{
            System.out.println("Il prodotto ha una meno di 4 giorni di conservazione rimanenti");
            return getPrezzoScontato();
        }


    }


}
