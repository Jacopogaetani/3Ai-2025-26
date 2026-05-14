package Supermercato;

public class NonAlimentari extends Prodotto{
    private String materiale;

    public NonAlimentari(int codiceBarre, String descrizioneBreve, float prezzoUnitario, String materiale) {
        super(codiceBarre, descrizioneBreve, prezzoUnitario);
        this.materiale = materiale;
    }

    public String getMateriale() {
        return materiale;
    }

    public void setMateriale(String materiale) {
        this.materiale = materiale;
    }

    public String stampa()
    {
        return "Prodotto: " + getDescrizioneBreve() + " con codice a barre "  + getCodiceBarre() + " materiale: " + materiale;
    }

    public float scontoMateriale()
    {
        if(materiale == "carta" || materiale == "vetro" || materiale == "plastica")
        {
            System.out.println("Il materiale " + this.getMateriale() + " rientra nella lista di materiali di prodotti che verranno scontati")
            setPrezzoScontato(getPrezzoUnitario() - (getPrezzoUnitario() * 8) / 100);
            return getPrezzoScontato();
        }
        else{
            System.out.println("Il materiale del prodotto " + this.materiale + " non rientra nella lista dei materiali scontati");
            return getPrezzoScontato();
        }


    }


}
