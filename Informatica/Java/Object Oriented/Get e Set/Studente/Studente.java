package Studente;
import java.time.LocalDate;

public class Studente {
    private String nome, cognome;
    private int annoNascita;
    private float mediaVoti;
    private static int numeroStudenti;
    private static float mediaGenerale;


    public Studente(String nome, String cognome, int annoNascita, float mediaVoti)
    {
        this.nome = nome;
        this.cognome = cognome;
        this.annoNascita = annoNascita;
        this.mediaVoti = mediaVoti;
        numeroStudenti++;
        mediaGenerale+=mediaVoti;
    }

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

    public int getAnnoNascita() {
        return annoNascita;
    }

    public void setAnnoNascita(int annoNascita) {
        this.annoNascita = annoNascita;
    }

    public float getMediaVoti() {
        return mediaVoti;
    }

    public void setMediaVoti(float mediaVoti) {
        this.mediaVoti = mediaVoti;
    }

    public static int getNumeroStudenti() {
        return numeroStudenti;
    }

    public static float getMediaGenerale() {
        return mediaGenerale;
    }

    public static void setMediaGenerale(float mediaGenerale) {
        Studente.mediaGenerale = mediaGenerale;
    }

    public static void setNumeroStudenti(int numeroStudenti) {
        Studente.numeroStudenti = numeroStudenti;
    }

    public String stampaDati()
    {
        return "Lo studente " + nome + " " + cognome + " nato nell'anno " + annoNascita + " ha una media di voti pari a " + mediaVoti;
    }

    public float aggiornaMedia(float media)
    {
        this.mediaVoti = media;
        return mediaVoti;
    }

    public int trovaEta()
    {
        int eta = LocalDate.now().getYear() - annoNascita;
        return eta;
    }

    public boolean isMaggiorenne()
    {
        int eta = trovaEta();
        if(eta >= 18)
        {
            return true;
        }
        else{
            return false;
        }
    }

    public static String stampaNumeroStudenti()
    {
        return"Numero studenti dell'istituto: " + numeroStudenti;
    }

    public static String studenteMigliore(Studente s1, Studente s2)
    {
        if(s1.mediaVoti > s2.mediaVoti)
        {
            return "Lo studente " + s1.nome + " ha una media maggiore dello studente " + s2.nome;

        }
        else if(s1.mediaVoti < s2.mediaVoti)
        {
            return "Lo studente " + s2.nome + " ha una media maggiore dello studente " + s1.nome;
        }
        else{
            return "Lo studente " + s1.nome + " ha una media uguale dello studente " + s2.nome;
        }
    }


}

