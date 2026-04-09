package gaetani;
import java.time.LocalDate;

public class Employee {
    private String nome, cognome, profiloProfessionale;
    private int annoDiNascita, anniEsperienza;
    private float stipendio;
    private int eta;
    private int calcolaEta;
    
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

    public String getProfiloProfessionale() {
        return profiloProfessionale;
    }

    public void setProfiloProfessionale(String profiloProfessionale) {
        this.profiloProfessionale = profiloProfessionale;
    }

    public int getAnnoDiNascita() {
        return annoDiNascita;
    }

    public void setAnnoDiNascita(int annoDiNascita) {
        this.annoDiNascita = annoDiNascita;
    }

    public int getAnniEsperienza() {
        return anniEsperienza;
    }

    public void setAnniEsperienza(int anniEsperienza) {
        this.anniEsperienza = anniEsperienza;
    }
    
    public Employee(){
        nome = "";
        cognome = "";
        profiloProfessionale = "";
        annoDiNascita = 0;
        anniEsperienza = 0;
        stipendio = 0.0f;
       
    }
    
    public Employee(String nome, String cognome, String profiloProfessionale, int annoDiNascita, int anniEsperienza, float stipendio)
    {
        this.nome = nome;
        this.cognome = cognome;
        this.profiloProfessionale = profiloProfessionale;
        this.annoDiNascita = annoDiNascita;
        this.anniEsperienza = anniEsperienza;
        this.stipendio = stipendio;
    }
    
    public float incrementaSalario(float perc)
    {
        stipendio = stipendio + (stipendio * perc);
        return stipendio;
    }
    
    public int calcolaEta()
    {
        int annoCorrente = LocalDate.now().getYear();
        int eta = annoCorrente - annoDiNascita;
        return eta;
    }
    
    public boolean anni()
    {
        if(anniEsperienza > 10)
        {
            return true;
        }
        else{
            return false;
        }
    }
    
    public int confrontoStipendio(Employee e1)
    {
        if(this.stipendio > e1.stipendio)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    
    public int etaMassima(Employee e1)
    {
        int etaMassima = this.calcolaEta();
        
        if(e1.calcolaEta > etaMassima)
        {
            return e1.eta;
        }
        else{
            return this.eta;
        }
    }
    
    //Metodo per stampare informazioni
    //Fare main
    //Cancellare package perché netBeans era usato nell'epoca dei dinosauri...
}
