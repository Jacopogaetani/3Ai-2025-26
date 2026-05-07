/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

public class Corso {
    private String nomeCorso, docenteTitolare, settoreScientifico;
    private int crediti, studentiMassimo, studentiIscritti; 
    private StudUniv[] lista;
    
    public Corso(String nomeCorso, String docenteTitolare, String settoreScientifico, int crediti, int studentiMassimo, int studentiIscritti) {
        this.nomeCorso = nomeCorso;
        this.docenteTitolare = docenteTitolare;
        this.settoreScientifico = settoreScientifico;
        this.crediti = crediti;
        this.studentiIscritti = 0;
        lista = new StudUniv[studentiMassimo];
    }

    public String getNomeCorso() {
        return nomeCorso;
    }

    public void setNomeCorso(String nomeCorso) {
        this.nomeCorso = nomeCorso;
    }

    public String getDocenteTitolare() {
        return docenteTitolare;
    }

    public void setDocenteTitolare(String docenteTitolare) {
        this.docenteTitolare = docenteTitolare;
    }

    public String getSettoreScientifico() {
        return settoreScientifico;
    }

    public void setSettoreScientifico(String settoreScientifico) {
        this.settoreScientifico = settoreScientifico;
    }

    public int getCrediti() {
        return crediti;
    }

    public void setCrediti(int crediti) {
        this.crediti = crediti;
    }

    public StudUniv[] getLista() {
        return lista;
    }

    public void setLista(StudUniv[] lista) {
        this.lista = lista;
    }
    
    public void addStudente(StudUniv studente)
    {
        if(studentiIscritti < lista.length)
        {
            lista[studentiIscritti] = studente;
            studentiIscritti++;

            System.out.println("Agggiunto " + studentiIscritti + " studente");

        }
        else{
            System.out.println("Raggiunto il massimo");
        }
        
    }
    
    public void restituisciMatricola(){
        for(int i = 0; i < studentiIscritti; i++)
        {
            System.out.println("Matricola studente n. " + i + ": " + lista[i].getMatricola());
        }
    
    }
    
    public void stampa()
    {
        for(int i = 0; i < studentiIscritti; i++)
        {
            System.out.println(lista[i].nome);
        }
    }

    /*un metodo che, data una matricola k, restituisce l’elenco degli studenti del
    corso la cui matricola è maggiore di k;*
     */

    public void matricolaMaggiore(int k)
    {
        for(int i = 0; i < studentiIscritti; i++)
        {
            if(lista[i].getMatricola() > k)
            {
                System.out.println("La matricola di " + lista[i].getNome() + " è maggiore di " + k);
            }
        }
    }

    public boolean trovaNomeCognome(String nome, String cognome)
    {
        boolean nomeTrovato = false;
        boolean cognomeTrovato = false;

        for(int i = 0; i < studentiIscritti; i++)
        {
            if(lista[i].nome == nome)
            {
                nomeTrovato = true;
            }

            if(lista[i].cognome == cognome)
            {
                cognomeTrovato = true;
            }
        }

        if(nomeTrovato && cognomeTrovato)
        {
            return true;
        }
        else{
            return false;
        }
    }


}
