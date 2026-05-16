package Personale;

public class Volontario extends Personale{
    //Sottoclasse ereditata da personale
    public Volontario(String nome, String cognome, int telefono, String indirizzo, float quotaFissa) {
        super(nome, cognome, telefono, indirizzo, quotaFissa);
        //Costruttore della superclasse richiamato con super
    }


    //Setta a 0 la quota fissa
    public float paga()
    {
        setQuotaFissa(0);
        return getQuotaFissa();
    }

}
