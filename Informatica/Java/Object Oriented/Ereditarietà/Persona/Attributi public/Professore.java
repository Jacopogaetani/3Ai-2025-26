package Ereditarieta;

public class Professore extends Persona{
    public String materia;
    public int anniEsperienza;

    public Professore(String nome, String cognome, String residenza, int annoDiNascita, int codiceFiscale, int anniEsperienza, String materia) {
        super(nome, cognome, residenza, annoDiNascita, codiceFiscale);
        this.anniEsperienza = anniEsperienza;
        this.materia = materia;
    }

    public boolean esperto()
    {
        if(anniEsperienza >= 10)
        {
            System.out.println("Il professore/professoressa " + this.cognome + " è esperto/a");
            return true;
        }
        System.out.println("Il professore/professoressa " + this.cognome + " non è esperto/a");
        return false;
    }

    public String presentati()
    {
        return "Ciao sono " + nome + " " + cognome + " e insegno " + materia;
    }
}
