package Autobus;

public class Autobus {
    private String destinazione;
    private int numeroPosti, postiDisponibili;
    private float tariffa;

    public String getDestinazione() {
        return destinazione;
    }

    public void setDestinazione(String destinazione) {
        this.destinazione = destinazione;
    }

    public int getNumeroPosti() {
        return numeroPosti;
    }

    public void setNumeroPosti(int numeroPosti) {
        this.numeroPosti = numeroPosti;
    }

    public int getPostiDisponibili() {
        return postiDisponibili;
    }

    public void setPostiDisponibili(int postiDisponibili) {
        this.postiDisponibili = postiDisponibili;
    }

    public float getTariffa() {
        return tariffa;
    }

    public void setTariffa(float tariffa) {
        this.tariffa = tariffa;
    }

    public Autobus(String destinazione, int numeroPosti, float tariffa)
    {
        this.destinazione = destinazione;
        this.numeroPosti = numeroPosti;
        this.tariffa = tariffa;
    }

    public Autobus()
    {
        this("destinazione", 0, 0.0f);
        postiDisponibili = 0;
    }

    public void aggiornaDati(String destinazione, int numeroPosti, int postiDisponibili, float tariffa)
    {
        this.destinazione = destinazione;
        this.numeroPosti = numeroPosti;
        this.postiDisponibili = postiDisponibili;
        this.tariffa = tariffa;
    }

    public void prenotazione(int biglietti)
    {
        if(biglietti <= this.getPostiDisponibili())
        {
            System.out.println("Si possono prenotare " + biglietti + " biglietti");
            postiDisponibili-=biglietti;
            System.out.println("Tariffa totale: " + tariffa*biglietti);
        }
        else{
            System.out.println("Non è stato possibile prenotare " + biglietti + " biglietti");
        }
    }

    public void annullaPrenotazione(int bigliettiAnnullati)
    {
        if(postiDisponibili + bigliettiAnnullati > this.getPostiDisponibili())
        {
            System.out.println("Non è stato possibile annullare questi biglietti");
        }
        else
        {
            System.out.println("è stato possibile annullare questi biglietti");
            postiDisponibili+=bigliettiAnnullati;
        }
    }

    public float lastMinute()
    {
        tariffa = tariffa - (tariffa * 0.50f);
        return tariffa;
    }

    public String info()
    {
    }
}
